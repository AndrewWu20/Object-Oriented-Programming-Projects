#include <iostream>
#include <algorithm>
#include "hash_map.h"

template <typename K, typename V>
hash_map<K,V>::hash_map(size_t capacity, float upper_load_factor, float lower_load_factor){
    _size = 0;
    _capacity = capacity;
    _head = new hash_list<K,V>[_capacity];
    _upper_load_factor = upper_load_factor;
    _lower_load_factor = lower_load_factor;
}

template <typename K, typename V>
hash_map<K,V>::hash_map(const hash_map &other) {
    _size = 0;
    _capacity = other._capacity;
    _head = new hash_list<K,V>[_capacity];
    _upper_load_factor = other._upper_load_factor;
    _lower_load_factor = other._lower_load_factor;
    size_t cap = other.get_capacity();
    hash_list<K,V> *curr_lst = other._head;
    for(size_t i = 0; i < cap; i++){
        node<K,V> *curr = curr_lst[i].get_head();
        while(curr != NULL){
            this->insert(curr->key, curr->value);
            curr = curr->next; 
        }
    }
}

template <typename K, typename V>
hash_map<K,V> &hash_map<K,V>::operator=(const hash_map &other){
    if(this == &other){
        return *this;
    }

    hash_map<K,V> temp = other;
    std::swap(_size, temp._size);
    std::swap(_head, temp._head);
    std::swap(_capacity, temp._capacity);
    std::swap(_upper_load_factor, temp._upper_load_factor);
    std::swap(_lower_load_factor, temp._lower_load_factor);

    return *this; 
}

template <typename K, typename V>
void hash_map<K,V>::insert(K key, V value){
    if(_size == 0){
        _capacity = _capacities[0];
    }
    int bucket = _hash(key) % _capacity;
    size_t temp = _head[bucket].get_size();
    _head[bucket].insert(key, value);

    if(_head[bucket].get_size() != temp){
        _size += 1;
        if(need_to_rehash(1))
        {
            rehash(1);
        }
    }
}

template <typename K, typename V>
bool hash_map<K,V>::remove(K key){
    if(_size == 1){
        _capacity = _capacities[0];
    }
    int bucket = _hash(key) % _capacity;
    bool removed =  _head[bucket].remove(key);
    if(removed){
        _size -= 1;
        if(need_to_rehash(0))
        {
            rehash(0);
        }
    }

    return removed;
}

template <typename K, typename V>
size_t hash_map<K,V>::get_size() const{
    return _size;
}

template <typename K, typename V>
size_t hash_map<K,V>::get_capacity() const{
    return _capacity;
}

template <typename K, typename V>
void hash_map<K,V>::get_all_keys(K *keys){
    int count = 0;
    for(size_t i = 0; i < _capacity; i++){
        node<K,V> *curr = _head[i].get_head();
        while(curr != NULL){
            keys[count] = curr->key;
            curr = curr->next;
            count += 1;
        }
    }
}

template <typename K, typename V>
void hash_map<K,V>::get_bucket_sizes(size_t *buckets){
    for(size_t i = 0; i < _capacity; i++){
        buckets[i] = _head[i].get_size();
    }
}

template <typename K, typename V>
std::optional<V> hash_map<K,V>::get_value(K key) const{
    int bucket = _hash(key) % _capacity;
    std::optional<V> ret_val = _head[bucket].get_value(key);
    return ret_val;
}

template <typename K, typename V>
hash_map<K,V>::~hash_map(){
    if(_head == NULL){
        return;
    }

    for(size_t i = 0; i < _capacity; i++){
        _head[i].~hash_list();
    }

    delete [] _head;
    return;
}

template <typename K, typename V>
void hash_map<K,V>::print_map(void){
    for(size_t i = 0; i < _capacity; i++){
        if(_head[i].get_size() != 0){
            std::cout << "\nBucket " << i << "\n";
            _head[i].print_list();
        }
        
    }
}

template <typename K, typename V>
int hash_map<K,V>::need_to_rehash(int typ){
    //check if removing, capacity is not lowest, and load factor value
    if((typ == 0) && (_size < _lower_load_factor * _capacity) && (_capacity != _capacities[0])){
        return 1;
    }
    else if((typ == 1) && (_size > _upper_load_factor * _capacity) && (_capacity != _capacities[2])){
        return 1;
    }else{
        return 0;
    }
}

template <typename K, typename V>
void hash_map<K,V>::rehash(int j){
    size_t cap = _capacity;
    size_t new_cap = 0;
    if(j == 1){
        for(int k = 0; k < 3; k++){
            if((_capacity == _capacities[k]) and (k != 2))
            {
                new_cap = _capacities[k+1];
                break;
            }
        }
        
    }
    else if(_capacity != _capacities[0]){
        for(int k = 0; k < 3; k++){
            if((_capacity == _capacities[k]) and (k != 0))
            {
                new_cap = _capacities[k-1];
                break;
            }
        }
    }
    else{
        return;
    }
    if(new_cap == 0){
        return;
    }
    
    hash_map<K,V> temp = hash_map<K,V>(new_cap, _upper_load_factor, _lower_load_factor);
    for(size_t i = 0; i < cap; i++){
        node<K,V> *curr = _head[i].get_head();
        while(curr != NULL){
            int bucket = _hash(curr->key) % new_cap;
            temp._head[bucket].insert(curr->key, curr->value);
            curr = curr->next;
        }
    }

    delete [] _head;
    _head = temp._head;
    temp._head = NULL;
    _capacity = new_cap;
}

template <typename K, typename V>
void hash_map<K,V>::get_all_sorted_keys(K *keys){
    get_all_keys(keys);
    std::sort(keys, keys+get_size());
}

template <typename K, typename V>
void hash_map<K,V>::print_keys(K *keys, int n){
    for(int i = 0; i < n; i++){
        std::cout << "Key: "<<keys[i]<<"\n";
    }
}