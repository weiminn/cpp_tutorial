#include <iostream>
#include <vector>
#include "linkedlist.hpp"
#include "queue.hpp"

using namespace std;

template <typename T> 
Queue<T>::Queue() {}

template <typename T> 
void Queue<T>::enqueue(T x){
    LinkedList<T>::add(x);
}

template <typename T> 
T Queue<T>::dequeue(){

    // cout << " Accessing Head" << ") ";
    T res = LinkedList<T>::head->value;
    // cout << " (Dequeued: " << res << ") ";
    LinkedList<T>::remove(0);

    // T res = LinkedList<T>::tail->value;
    // LinkedList<T>::remove(LinkedList<T>::getSize()-1);
    return res;
}

// explictly instantiation for all the types this class will be used with
template class Queue<int>;
template class Queue<double>;
template class Queue<string>;