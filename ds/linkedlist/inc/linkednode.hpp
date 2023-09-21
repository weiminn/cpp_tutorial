#pragma once

using namespace std;

// You need to wrap your object inside the LinkedNode before you add them to the LinkedList
template <typename T>
class LinkedNode {
    private:
        T value;

    public:
        LinkedNode(T value);
        
        // need to use pointers because LinkedNode hasn't finished defining at this point yet!
        LinkedNode<T> *next;
        LinkedNode<T> *prev;
};