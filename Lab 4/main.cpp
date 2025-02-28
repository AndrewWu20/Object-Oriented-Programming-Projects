#include <iostream>
#include <chrono>
#include <optional>
#include <vector>

#include "poly.h"

std::optional<double> poly_test(polynomial& p1, polynomial& p2,
                                std::vector<std::pair<power, coeff>> solution)

{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();

    polynomial p3 = p1 * p2;

    auto p3_can_form = p3.canonical_form();

    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    p3.print();

    if (p3_can_form != solution)
    {
        return std::nullopt;
    }

    return std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count();
}

int main()
{
    /** We're doing (x+1)^2, so solution is x^2 + 2x + 1*/
    std::vector<std::pair<power, coeff>> solution = {{2,1}, {1,2}, {0,1}};

    /** This holds (x+1), which we'll pass to each polynomial */
    std::vector<std::pair<power, coeff>> poly_input = {{1,1}, {0,1}};

    polynomial p1(poly_input.begin(), poly_input.end());
    polynomial p2(poly_input.begin(), poly_input.end());
    
    std::cout << "p1: ";
    p1.print();
    std::cout << "p2: ";
    p2.print();

    // std::optional<double> result = poly_test(p1, p2, solution);

    // if (result.has_value())
    // {
    //     std::cout << "Passed test, took " << result.value()/1000 << " seconds" << std::endl;
    // } 
    // else 
    // {
    //     std::cout << "Failed test" << std::endl;
    // }

    polynomial empty;
    std::cout << "empty: ";
    empty.print();
    
    std::vector<std::pair<power, coeff>> p3val = {{2,2}, {1,1}, {0,5}};
    std::vector<std::pair<power, coeff>> p4val = {{0,6}, {2,5}, {1,9}, {3, 2}};
    polynomial p3 = polynomial(p3val.begin(), p3val.end());
    polynomial p4 = polynomial(p4val.begin(), p4val.end());
    std::cout << "p3: ";
    p3.print();
    std::cout << "p4: ";
    p4.print();

    // polynomial pa = p3; //copy contructor
    // std::cout << "pa: ";
    // pa.print();

    // pa = p4; //assignment operator
    // std::cout << "pa: ";
    // pa.print();

    polynomial p5 = p3 + p4;
    std::cout << "p5: ";
    p5.print();

    polynomial p6 = p5 + 5;
    std::cout << "p6: ";
    p6.print();

    polynomial p7 = 1 + p6;
    std::cout << "p7: ";
    p7.print();

    polynomial p8 = p7 * 2;
    std::cout << "p8: ";
    p8.print();

    polynomial p9 = 3 * p8;
    std::cout << "p9: ";
    p9.print();

    polynomial p10 = p1 * p3;
    std::cout << "p10: ";
    p10.print();

    std::vector<std::pair<power, coeff>> p11val = {{2,-2}, {1,-1}, {0,-5}};
    polynomial p11 = polynomial(p11val.begin(), p11val.end());
    std::cout << "p11: ";
    p11.print();

    polynomial p12 = p11 * p1;
    std::cout << "p12: ";
    p12.print();

    polynomial p13 = p11 + p3;
    std::cout << "p13: ";
    p13.print();

    std::vector<std::pair<power, coeff>> p14val = {{2,2}, {1,7}, {0,-4}};
    polynomial p14 = polynomial(p14val.begin(), p14val.end());
    std::vector<std::pair<power, coeff>> p15val = {{1,1}, {0,-3}};
    polynomial p15 = polynomial(p15val.begin(), p15val.end());

    polynomial p16 = p14 % p15;
    std::cout << "p16: ";
    p16.print(); //should be 35


    // std::cout << "\np12 with canon: ";
    // p12.print();
    // p12.canonical_form();


    std::vector<std::pair<power, coeff>> p17val = {{15,15},{14,14},{13,13},{12,12},{11,11},{10,10},{9,9},
                                {8,8},{7,7},{6,6},{5,5},{4,4},{3,3},{2,2},{1,1},{0,0}};
    polynomial p17 = polynomial(p17val.begin(), p17val.end());
    p17.print();

    int a = -2;
    polynomial p18 = a * p17;
    p18.print();
    polynomial p19 = p17 * a;
    p19.print();

    std::vector<std::pair<power, coeff>> p20val = {{1,2},{0,1},{2,1}};
    polynomial p20 = polynomial(p20val.begin(), p20val.end());
    std::cout << "p20: ";
    p20.print();
    std::vector<std::pair<power, coeff>> p21val = {{0,5},{2,1},{3,3},{1,2}};
    polynomial p21 = polynomial(p21val.begin(), p21val.end());
    std::cout << "p21: ";
    p21.print();
    polynomial p22 = p21 % p20;
    std::cout << "p22: ";
    p22.print(); //should be 9x + 10
    // p22.canonical_form();


    std::vector<std::pair<power, coeff>> p23val = {{0,0},{2,0},{3,0},{1,0}};
    polynomial p23 = polynomial(p23val.begin(), p23val.end());
    p23.print();
    // p23.canonical_form();




    std::cout << "\n\nMultiply with Threads example: \n";
    // std::vector<std::pair<power, coeff>> p24val = {{6,5}, {5,4}, {4,3}, {3,2}, {2,1}, {1,0}, {0,10}};
    std::vector<std::pair<power, coeff>> p24val = {{6,5}, {5,4},{4,3}, {3,2}, {2,1}, {1,1}, {0,10}};//{{6,5}, {5,4}, {4,3}, {3,2}, {2,1}, {1,1}, {0,10}};
    polynomial p24 = polynomial(p24val.begin(), p24val.end());
    std::cout << "p24: ";
    p24.print();


    // std::vector<std::pair<power, coeff>>p25val = {{5,20}, {4,15}, {3,10}, {2,5}, {1,1}, {0,5}};
    std::vector<std::pair<power, coeff>>p25val = {{5,20}, {4,15}, {3,10}, {2,5}, {1,1}, {0,5}};//{{5,20}, {4,15}, {3,10}, {2,5}, {1,1}, {0,5}};
    polynomial p25 = polynomial(p25val.begin(), p25val.end());
    std::cout << "p25: ";
    p25.print();

    polynomial p26 = p24 * p25;
    std::cout << "p26: ";
    p26.print();

    polynomial p27 = p25 * p24;
    std::cout << "p27: ";
    p27.print();


    std::cout << "\nMultiply with large sparse Threads example: \n";
    // std::vector<std::pair<power, coeff>> p24val = {{6,5}, {5,4}, {4,3}, {3,2}, {2,1}, {1,0}, {0,10}};
    std::vector<std::pair<power, coeff>> p28val = {{99999,1},{35,1},{34,1},{33,1},{32,1},{31,1},{30,1},{29,1},{28,1},
        {27,1},{26,1},{25,1},{24,1},{23,1},{22,1},{21,1},{20,1},{19,1},{18,1},{17,1},{16,1},{15,1},{14,1},{13,1},
        {12,1},{11,1},{10,1},{9,1},{8,1},{7,1},{6,5},{5,4},{4,3},{3,2},{2,1},{1,1},{0,10}};
    polynomial p28 = polynomial(p28val.begin(), p28val.end());
    std::cout << "p28: ";
    p28.print();


    // std::vector<std::pair<power, coeff>>p25val = {{5,20}, {4,15}, {3,10}, {2,5}, {1,1}, {0,5}};
    std::vector<std::pair<power, coeff>>p29val = {{99998,1},{2,5},{1,1},{0,5}};
    polynomial p29 = polynomial(p29val.begin(), p29val.end());
    std::cout << "p29: ";
    p29.print();

    polynomial p32 = p28 + p29;
    std::cout << "p32: ";
    // p32.print();

    polynomial p30 = p28 * p29;
    std::cout << "p30: ";
    // p30.print();

    polynomial p31 = p29 * p28;
    std::cout << "p31: ";
    // p31.print();

    std::cout << "\n";

    std::cout << "\nMultiply with very large Threads example: \n";
    std::vector<std::pair<power, coeff>> p33val;
    std::vector<std::pair<power, coeff>> p34val;
    size_t sz = 10000;
    for(size_t i = 0; i < sz; i++){
        p33val.push_back(std::pair(i, 1) );
        p34val.push_back(std::pair(i, sz-i) );
    }
    p33val.push_back(std::pair(sz, 1) );

    polynomial p33 = polynomial(p33val.begin(), p33val.end());
    // std::cout << "p33: ";
    // p33.print();

    polynomial p34 = polynomial(p34val.begin(), p34val.end());
    // std::cout << "p34: ";
    // p34.print();


    polynomial p35 = p33 + p34;
    std::cout << "p35: ";
    // p35.print();

    polynomial p36 = p33 * p34;
    std::cout << "p36: ";
    // p36.print();

    polynomial p37 = p34 * p33;
    std::cout << "p37: ";
    // p37.print();

    std::cout << "\n";



}