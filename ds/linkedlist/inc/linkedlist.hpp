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
        LinkedNode<T> *head;
        LinkedNode<T> *tail;
        int size;

    public:
        LinkedList<T>(ArrayList<T> arr);
        
        LinkedNode<T> getHead();
        void setHead(LinkedNode<T> node);
        void setHead(T node);

        LinkedNode<T> getTail();
        void setTail(LinkedNode<T> node);
        void setTail(T node);

        // // ArrayList(vector<T> input);
        // int getSize();
        // // void add(T x);
        // void add(int i, x);
        // void remove(int i);
        // // void removeAll();
        // // bool isEmpty();
        // T get(int i);
        // T set(int i, T x);
        // // ArrayList<T> subList(int i1, int i2);
        // // int indexOf(T)
        // // void sort(Comparator)
        // // iterator
        // void printString();

};
