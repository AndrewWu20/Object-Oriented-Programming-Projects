#include <iostream>

#include "hash_list.h"
#include "hash_map.h"



int main(int argc, char *argv[])
{
    printf("Main\n");
    hash_list<int, float> list;

    list.insert(1, 1.1);
    list.print_list();

    hash_map map = hash_map<float, float>(209, 1, 0.206);
    std::cout <<"map1  ->  " 
            << "capacity: " << map.get_capacity()
            << ", size: " << map.get_size() <<"\n";

    // map.insert(3, 4.1);
    for(int i = 0; i < 215; i++){
        std::cout << "\nInserting "<<i<<":";
        map.insert(i+1.5, i+0.1);
        
    }
    std::cout << "\n";
    std::cout <<"map1  ->  " 
            << "capacity: " << map.get_capacity()
            << ", size: " << map.get_size() <<"\n";

    for(int i = 0; i < 40; i++){
        std::cout << "\nRemoving "<<i<<":";
        map.remove(i+1.5);
        
    }
    std::cout <<"map1  ->  " 
            << "capacity: " << map.get_capacity()
            << ", size: " << map.get_size() <<"\n";

    float keys[map.get_size()];
    map.get_all_sorted_keys(keys);
//     map.print_keys(keys, map.get_size());
    // map.print_map();


    hash_map map2 = hash_map<float, float>(209, 1, 0.206);
    for(int i = 0; i < 400; i++){
        map2.insert(i+10, i+1.1);
    }
    std::cout <<"map2  ->  " 
        << "capacity: " << map2.get_capacity()
        << ", size: " << map2.get_size() <<"\n";
//     map2.print_map();

    hash_map map3 = map; //copy constructor
    std::cout <<"map3  ->  " 
        << "capacity: " << map3.get_capacity()
        << ", size: " << map3.get_size() <<"\n";
//     map3.print_map();

    map3 = map2; //assignment operator
    // map3.print_map();
    std::cout <<"map3  ->  " 
        << "capacity: " << map3.get_capacity()
        << ", size: " << map3.get_size() <<"\n";
    


    return EXIT_SUCCESS;
}