#include <iostream>
#include "hash_map.h"

hash_map::hash_map(size_t capacity){
    _size = 0;
    _capacity = capacity;
    _head = new hash_list[capacity];
}

hash_map::hash_map(const hash_map &other) {
    _size = 0;
    _capacity = other._capacity;
    _head = new hash_list[_capacity];

    hash_list *curr_lst = other._head;
    for(size_t i = 0; i < _capacity; i++){
        node *curr = curr_lst[i].get_head();
        while(curr != NULL){
            this->insert(curr->key, curr->value);
            curr = curr->next; 
        }
    }
}

hash_map &hash_map::operator=(const hash_map &other){
    if(this == &other){
        return *this;
    }

    hash_map temp = other;
    std::swap(_size, temp._size);
    std::swap(_head, temp._head);
    std::swap(_capacity, temp._capacity);

    return *this; 
}

void hash_map::insert(int key, float value){
    int bucket = key % _capacity;
    size_t temp = _head[bucket].get_size();
    _head[bucket].insert(key, value);

    if(_head[bucket].get_size() != temp){
        _size += 1;
    }
    
    
    
}

bool hash_map::remove(int key){
    int bucket = key % _capacity;
    bool removed =  _head[bucket].remove(key);
    if(removed){
        _size -= 1;
    }
    return removed;
}

size_t hash_map::get_size() const{
    return _size;
}

size_t hash_map::get_capacity() const{
    return _capacity;
}

void hash_map::get_all_keys(int *keys){
    int count = 0;
    for(size_t i = 0; i < _capacity; i++){
        node *curr = _head[i].get_head();
        while(curr != NULL){
            keys[count] = curr->key;
            curr = curr->next;
            count += 1;
        }
    }
}

void hash_map::get_bucket_sizes(size_t *buckets){
    for(size_t i = 0; i < _capacity; i++){
        buckets[i] = _head[i].get_size();
    }
}

std::optional<float> hash_map::get_value(int key) const{
    int bucket = key % _capacity;
    std::optional<float> ret_val = _head[bucket].get_value(key);
    return ret_val;
}

hash_map::~hash_map(){
    if(_head == NULL){
        return;
    }

    for(size_t i = 0; i < _capacity; i++){
        _head[i].~hash_list();
    }

    delete [] _head;

    return;
}

void hash_map::print_map(void){

    for(size_t i = 0; i < _capacity; i++){
        std::cout << "\nBucket: " << i << "\n";
        _head[i].print_list();
    }
}
