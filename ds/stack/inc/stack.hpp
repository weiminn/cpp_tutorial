#pragma once

#include "linkedlist.hpp"

using namespace std;

// You need to wrap your object inside the LinkedNode before you add them to the LinkedList
template <typename T>
class Stack: 

    // must include the template <T> for the parent class as well!
    public LinkedList<T> 

{
    public:
        Stack();
        void push(T x);
        T pop();
};