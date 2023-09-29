#pragma once

#include <vector>

using namespace std;

template <typename T> 
class ArrayList {
    private:
        vector<T> data;

    public:
        ArrayList();
        ArrayList(vector<T> input);
        int getSize();
        void add(T x);
        void remove(int i);
        void removeAll();
        bool isEmpty();
        T get(int i);
        T set(int i, T x);
        ArrayList<T> subList(int i1, int i2);
        int indexOf(T x);
        // void sort(Comparator)
        // void resize(int)
        // void shift(int i, int j)
        // void add(int i, x)
        // void remove(int)
        // iterator
        void printString();

};
