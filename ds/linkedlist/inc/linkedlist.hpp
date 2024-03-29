#pragma once

#include <vector>
#include <iostream>
#include "arraylist.hpp"
#include "linkednode.hpp"

using namespace std;

template <typename T>
class LinkedList {
    private:
        // need to use pointers cos LinkedNode's next and prev are also using pointers, so need to keep it consistent!
        int size; 

    public:
        LinkedNode<T> *head;
        LinkedNode<T> *tail;
        
        LinkedList<T>();
        LinkedList<T>(ArrayList<T> arr);

        int getSize();
        void add(T x);
        void add(T x, int n);
        void remove(int n);
        void removeRecurse(LinkedNode<T> *currNode);
        void removeAll();
        bool isEmpty();
        LinkedNode<T>* get(int i);
        // T set(int i, T x);
        // // ArrayList<T> subList(int i1, int i2);
        // // int indexOf(T)
        // // void sort(Comparator)
        // // iterator
        void printString();

};
