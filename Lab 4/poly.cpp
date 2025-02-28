#include "poly.h"
#include <iostream>
#include <thread>
#include <mutex>

polynomial::polynomial(){
    comap[0] = 0;
}


polynomial::polynomial(const polynomial &other){
    for(auto x : other.comap){
        comap[x.first] = x.second;
    }

    return;
}

polynomial &polynomial::operator=(const polynomial &other){
    if(this == &other){
        return *this;
    }

    polynomial temp = other;
    std::swap (comap, temp.comap);
    return *this;
}

void polynomial::print() const{
    std::map<power, coeff> sorted = sortMap();
    std::cout << "[";
    // for(auto x : sorted){ //print low to high power
    //     if(x.second != 0){
    //         std::cout << "("<<x.first<<","<<x.second <<"),";
    //     }
    // }

    for(auto x = sorted.rbegin(); x!= sorted.rend(); x++){ //print high to low power
        if(x->second != 0){
            std::cout << "("<<x->first<<","<<x->second <<"), ";
        }
    }
    std::cout << "]\n";
}


size_t polynomial::find_degree_of() const{
    size_t deg = 0;
    for(auto x : comap){
        if(x.first > deg){
            deg = x.first;
        }
    }

    return deg;
}

std::map<power, coeff> polynomial::sortMap() const{
    std::map<power, coeff> sorted; 
    for(auto u: comap){
        sorted[u.first] = u.second;
    }

    return sorted;
}


std::vector<std::pair<power, coeff>> polynomial::canonical_form() const{
    std::vector<std::pair<power, coeff>> canon;
    std::map<power, coeff> sorted = sortMap();

    for(auto x = sorted.rbegin(); x!= sorted.rend(); x++){
        if(x->second != 0){
            canon.push_back(std::pair<power, coeff>(x->first, x->second));
        }
    }

    if(canon.size() == 0){ //return (0,0) for empty polynomial
        canon.push_back(std::pair<power, coeff>(0,0));
    }

    return canon;
}


polynomial polynomial::operator+(const polynomial &other)const{ //poly + poly
    polynomial sum;

    for(auto a : comap){
        sum.comap[a.first] = sum.comap[a.first] + a.second;
    }
    
    for(auto b : other.comap){
        sum.comap[b.first] = sum.comap[b.first] + b.second;
    }

    return sum;
}

polynomial polynomial::operator+(const int con)const{ //poly + int
    polynomial sum = *this;
    sum.comap[0] = sum.comap[0] + con;
    return sum;
}

polynomial operator+(const int con, const polynomial &poly){//int + poly is free function
    return poly + con;
}

void polynomial::multMap(std::pair<power, coeff> par, polynomial &prod){
    for(auto a: comap){
        prod.comap[a.first + par.first] = a.second * par.second;
    }
}

void polynomial::newMult(std::vector<std::pair<power, coeff>> &par, polynomial &prod, std::mutex &mx) const{
    polynomial product;
    for(auto a: comap){
        for(auto p : par){
            product.comap[a.first + p.first] += a.second * p.second;
        }   
    }

    mx.lock();

    for(auto b: product.comap){
        prod.comap[b.first] += b.second;
        //maybe remove 0 coefficients to improve speed?
    }

    mx.unlock();
}


polynomial polynomial::operator*(const polynomial &other) const{ //poly * poly
    size_t numThreads = 8;
    std::vector<std::thread> threads; //threads
    polynomial product; //return value
    std::mutex mx;

    size_t osize = other.comap.size();
    size_t tsize = comap.size();
    // std::cout << "t size: "<<tsize<<"\n";
    // std::cout << "o size: "<<osize<<"\n";

    std::vector<std::vector<std::pair<power, coeff>>> vec{numThreads}; //holds n vectors, each holding 1/n of the polynomial pairs

    if(tsize > osize){ //this has more coeffs
        // std::cout << "t zone\n";
        auto iter = comap.begin();

        for(size_t i = 0; i <= tsize/numThreads; i++){
            for(size_t j = 0; j < numThreads; j++){ 
                if((i*numThreads)+j < tsize){
                    // std::cout << j <<": iter: "<<iter->first<<", "<<iter->second<<"\n";
                    vec[j].push_back(std::pair(iter->first, iter->second));
                    iter++;
                }
                else{
                    break;
                }
            }
        }

        for(size_t j = 0; j < numThreads; j++){ 
            std::thread t(&polynomial::newMult, other, std::ref(vec[j]), std::ref(product), std::ref(mx));
            threads.push_back(std::move(t));
        }

        for(std::thread &t : threads){
            t.join();
        } 
       
    }else{ //other has more coeffs
        // std::cout << "o zone\n";

        auto iter = other.comap.begin();

        for(size_t i = 0; i <= osize/numThreads; i++){
            for(size_t j = 0; j < numThreads; j++){ 
                if((i*numThreads)+j < osize){
                    // std::cout << j <<": iter: "<<iter->first<<", "<<iter->second<<"\n";
                    vec[j].push_back(std::pair(iter->first, iter->second));
                    iter++;
                }
                else{
                    break;
                }
            }
        }

        for(size_t j = 0; j < numThreads; j++){ 
            std::thread t(&polynomial::newMult, *this, std::ref(vec[j]), std::ref(product), std::ref(mx));
            threads.push_back(std::move(t));
        }

        for(std::thread &t : threads){
            t.join();
        }

    }

    // for(auto a: product.comap){ //removes all 0 coefficients
    //     if(a.second == 0){
    //         product.comap.erase(a.first);
    //     }
    // }

    return product;
}

polynomial polynomial::operator*(const int con) const{ //poly * int
    polynomial product = *this;
    for(auto a : product.comap){
        product.comap[a.first] = a.second * con; 
    }

    return product;
}
polynomial operator*(const int con, const polynomial &poly){//int * poly is free function
    return poly * con;
}

std::map<power, coeff> polynomial::multMod(std::pair<power, coeff> par)const{
    // std::map <power, coeff> sortmap = polyA.sortMap();
    std::map <power, coeff> productMap;
    
    // for(auto a: sortmap){
    for(auto a: comap){
        productMap[a.first + par.first] = a.second * par.second;
    }
    
    return productMap;
}

void subMod(std::map<power, coeff> &a, std::map<power, coeff> &b){
    for(auto term:b){
        a[term.first] -= term.second;
         if(a[term.first] == 0){
            a.erase(term.first);
        }
    }


}

template <class mp>
void TraverseMap(mp mymap){

  std::cout << "Map:\n";
  for(auto p: mymap){
    std::cout << p.first << ":" << p.second << "\n";
  }
  std::cout << "\n";
}

polynomial polynomial::operator%(const polynomial &other) const{ //poly % poly

    size_t degt = find_degree_of();
    size_t dego = other.find_degree_of();
    if(dego > degt){
        return *this;
    }

    polynomial rem;

    std::map<power, coeff> omap = other.sortMap();
    std::map<power, coeff> tmap = sortMap();

    std::map<power, coeff> res = tmap;
    std::map<power, coeff> sub;

    while(!res.empty() && res.rbegin()->first >= dego){
        int diffDeg = res.rbegin()->first - dego;
        int diffCoeff = res.rbegin()->second / omap.rbegin()->second;
        sub = other.multMod(std::pair(diffDeg, diffCoeff));
        subMod(res, sub);
    }

    for(auto a: res){
        rem.comap[a.first] = a.second;
    }

    return rem;
}
