#include <iostream>
#include <vector>
#include "linkedlist.hpp"
#include "stack.hpp"

using namespace std;

template <typename T> 
Stack<T>::Stack() {}

template <typename T> 
void Stack<T>::push(T x){
    LinkedList<T>::add(x);
}

template <typename T> 
T Stack<T>::pop(){

    // T res = LinkedList<T>::head->value;
    // LinkedList<T>::remove(0);

    T res = LinkedList<T>::tail->value;
    LinkedList<T>::remove(LinkedList<T>::getSize()-1);
    return res;
}

// explictly instantiation for all the types this class will be used with
template class Stack<int>;
template class Stack<double>;
template class Stack<string>;