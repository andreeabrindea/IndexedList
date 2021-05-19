#include "ListIterator.h"
#include "IndexedList.h"
#include <exception>

ListIterator::ListIterator(const IndexedList& list) : list(list) {
    //TODO - Implementation
    current_index = list.head;
}//Complexity: Theta(1)

void ListIterator::first() {
    //TODO - Implementation
    current_index = list.head;
}//Complexity: Theta(1)

void ListIterator::next() {
    //TODO - Implementation
    if(current_index < 0 || current_index >= list.cap){
        throw std::exception();
    }
    current_index = list.next[current_index];
}//Complexity: Theta(1)

bool ListIterator::valid() const {
    //TODO - Implementation
    return current_index >= 0 && current_index < list.cap;
}//Complexity: Theta(1)

TElem ListIterator::getCurrent() const {
    //TODO - Implementation
    if(valid()){
        return list.elems[current_index];
    }else{
        throw std::exception();
    }//Complexity: Theta(1)
}