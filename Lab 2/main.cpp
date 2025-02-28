#include <iostream>

#include "hash_list.h"
#include "hash_map.h"



int main(int argc, char *argv[])
{
    printf("Main\n");
    size_t cap = 4;
    hash_map map = hash_map(cap);

    map.insert(3, 4.1);
    for(int i = 0; i < 10; i++){
        map.insert(i, i+0.1);
    }

    std::cout <<"map1\n";
    map.print_map();
    
    size_t cap2 = 2;
    hash_map map2 = hash_map(cap2);
    for(int i = 0; i < 4; i++){
        map2.insert(i+10, i+1.1);
    }
    std::cout <<"\nmap2\n";
    map2.print_map();
    
    hash_map map3 = map;
    
    std::cout <<"\nmap3\n";
    map3.print_map();
    std::cout << "Size 1: " << map.get_size() << "\n";
    std::cout << "Size 2: " << map2.get_size() << "\n";
    std::cout << "Size 3: " << map3.get_size() << "\n";
    
    map3 = map2;
    std::cout <<"\nmap3 again\n";
    map3.print_map();

    std::cout << "Size 1: " << map.get_size() << "\n";
    std::cout << "Size 2: " << map2.get_size() << "\n";
    std::cout << "Size 3: " << map3.get_size() << "\n";


    int key1[map.get_size()];
    map.get_all_keys(key1);

    for(size_t i = 0; i < map.get_size(); i++){
        
        std::cout << i <<"Key: " << key1[i] <<"\n";
    }
    
    return EXIT_SUCCESS;
}