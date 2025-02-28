#include "hash_list.h"
#include <iostream>

template <typename K, typename V>
hash_list<K,V>::hash_list() {
    head = NULL;
    size = 0;
    iter_ptr = NULL;
}

template <typename K, typename V>
void hash_list<K,V>::insert(K key, V value) {

    if(head == NULL){
        node<K,V> *newnode = new node<K,V>; //allocate a new node
        newnode->key = key;
        newnode->value = value;
        newnode->next = NULL;
        head = newnode;
        size += 1;
        return;
    }

    iter_ptr = head;
    node<K,V> *prev = NULL;
    while(iter_ptr != NULL){

        if(iter_ptr->key < key){ //move to next node
            prev = iter_ptr;
            iter_ptr = iter_ptr->next;
        }
        else if(iter_ptr->key == key){ //replace node value with new value
            iter_ptr->value = value;
            return;
        }
        else{ //found location to 
            break;
        }
    }

    node<K,V> *newnode = new node<K,V>; //allocate a new node
    newnode->key = key;
    newnode->value = value;
    newnode->next = iter_ptr;

    if(prev == NULL){
        head = newnode;
    }
    else{
        prev->next = newnode;
    }
    
    size += 1;
    return;
}

template <typename K, typename V>
std::optional<V> hash_list<K,V>::get_value(K key) const { 
    node<K,V> *curr = head;
    while(curr != NULL){
        if(curr->key == key){ //key found
            std::optional<V> ret_val = curr->value;
            return ret_val;
        }
        else{ //next node
            curr = curr->next;
        }
    }
    return std::nullopt; 
}

template <typename K, typename V>
bool hash_list<K,V>::remove(K key) { 
    if(head == NULL){
        return false;
    }

    iter_ptr = head;
    node<K,V> *prev = NULL;
    while(iter_ptr != NULL){
        if(iter_ptr->key == key){ //key found
            
            if(prev == NULL){
                head = iter_ptr->next;
            }
            else{
                prev->next = iter_ptr->next;
            }
            delete iter_ptr;
            size -= 1;
            return true;
        }
        else{ //move to next node
            prev = iter_ptr;
            iter_ptr = iter_ptr->next;
        }
    }

    return false; 
}

template <typename K, typename V>
size_t hash_list<K,V>::get_size() const { 
    return size;
}

template <typename K, typename V>
hash_list<K,V>::~hash_list() {
    if(head == NULL){
        return;
    }
    iter_ptr = head;
    
    while(iter_ptr->next != NULL){
        node<K,V> *temp = iter_ptr;
        iter_ptr = temp->next;
        delete temp;
    }
    delete iter_ptr;

    head = NULL;
    return;
}

template <typename K, typename V>
hash_list<K,V>::hash_list(const hash_list &other) {
    this->size = 0;
    this->head = NULL;
    this->iter_ptr = NULL;

    node<K,V> *curr = other.head;
    while(curr != NULL){
        this->insert(curr->key, curr->value);
        curr = curr->next;
    }
}

template <typename K, typename V>
hash_list<K,V> &hash_list<K,V>::operator=(const hash_list &other) { 
    if(this == &other){
        return *this;
    }

    hash_list temp = other;
    std::swap(size, temp.size);
    std::swap(head, temp.head);
    std::swap(iter_ptr, temp.iter_ptr);

    return *this; 
}

template <typename K, typename V>
void hash_list<K,V>::reset_iter() {
    if(head == NULL){
        iter_ptr = NULL;
        return;
    }
    iter_ptr = head;
    return;
}

template <typename K, typename V>
void hash_list<K,V>::increment_iter() {
    if(iter_ptr == NULL){
        return;
    }
    iter_ptr = iter_ptr->next;
    return;
}

template <typename K, typename V>
std::optional<std::pair<const K *, V *>> hash_list<K,V>::get_iter_value() { 

    if(iter_ptr == NULL){
        return std::nullopt;
    }
    const K *key = &(iter_ptr->key);
    V *val = &(iter_ptr->value);
    std::pair<const K *, V *> our_pair = {key, val};
    std::optional<std::pair<const K *, V *>> ret_val = our_pair;
    return ret_val; 
}

template <typename K, typename V>
bool hash_list<K,V>::iter_at_end() { 
    if(iter_ptr == NULL){
        return true;
    }
    return false; 
}

template <typename K, typename V>
node<K,V> *hash_list<K,V>::get_head(){
    return head;
}

template <typename K, typename V>
void hash_list<K,V>::print_list(void){

    node<K,V> *curr = head;
    while(curr != NULL){
        std::cout << "Key: "<<curr->key<<", Value: "<<curr->value<<"\n";
        curr = curr->next;
    }

}