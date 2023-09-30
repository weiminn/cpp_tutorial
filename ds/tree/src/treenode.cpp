#include <iostream>
#include <vector>
#include "treenode.hpp"
#include "vertex.hpp"

using namespace std;

template <typename T, typename V> 
TreeNode<T, V>::TreeNode() {}

template <typename T> 
void Stack<T>::push(T x){
    LinkedList<T>::add(x);
}

template <typename T> 
T* Stack<T>::pop(){

    // T res = LinkedList<T>::head->value;
    // LinkedList<T>::remove(0);

    T res = LinkedList<T>::tail->value;
    LinkedList<T>::remove(LinkedList<T>::getSize()-1);
    return &res;
}

// explictly instantiation for all the types this class will be used with
template class Stack<int>;
template class Stack<double>;
template class Stack<string>;