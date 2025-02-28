#include "hash_list.h"

hash_list::hash_list() {
    head = NULL;
    size = 0;
    iter_ptr = NULL;
}

/**-----------------------------------------------------------------------------------
 * START Part 1
 *------------------------------------------------------------------------------------*/

void hash_list::insert(int key, float value) {

    if(head == NULL){
        node *newnode = new node; //allocate a new node
        newnode->key = key;
        newnode->value = value;
        newnode->next = NULL;
        head = newnode;
        size += 1;
        return;
    }

    iter_ptr = head;
    node *prev = NULL;
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

    node *newnode = new node; //allocate a new node
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

std::optional<float> hash_list::get_value(int key) const { 
    node *curr = head;
    while(curr != NULL){
        if(curr->key == key){ //key found
            std::optional<float> ret_val = curr->value;
            return ret_val;
        }
        else{ //next node
            curr = curr->next;
        }
    }
    return std::nullopt; 
}

bool hash_list::remove(int key) { 
    if(head == NULL){
        return false;
    }

    iter_ptr = head;
    node *prev = NULL;
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

size_t hash_list::get_size() const { 
    return size;
}

hash_list::~hash_list() {
    if(head == NULL){
        return;
    }
    iter_ptr = head;
    
    while(iter_ptr->next != NULL){
        node *temp = iter_ptr;
        iter_ptr = temp->next;
        delete temp;
    }
    delete iter_ptr;

    head = NULL;
    return;
}

/**-----------------------------------------------------------------------------------
 * END Part 1
 *------------------------------------------------------------------------------------*/


/**-----------------------------------------------------------------------------------
 * START Part 2
 *------------------------------------------------------------------------------------*/

hash_list::hash_list(const hash_list &other) {}

hash_list &hash_list::operator=(const hash_list &other) { return *this; }

void hash_list::reset_iter() {}


void hash_list::increment_iter() {}


std::optional<std::pair<const int *, float *>> hash_list::get_iter_value() { return std::nullopt; }


bool hash_list::iter_at_end() { return false; }
/**-----------------------------------------------------------------------------------
 * END Part 2
 *------------------------------------------------------------------------------------*/
