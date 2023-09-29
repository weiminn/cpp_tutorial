#include <iostream>
#include <vector>
#include "arraylist.hpp"
#include "vertex.hpp"

using namespace std;

template <typename T> 
ArrayList<T>::ArrayList() {
    ArrayList::data = {};
}

template <typename T> 
ArrayList<T>::ArrayList(vector<T> vector) {
    ArrayList::data = vector;
}

template <typename T> 
int ArrayList<T>::getSize(){
    return ArrayList::data.size();
}

template <typename T> 
void ArrayList<T>::add(T x){
    ArrayList::data.push_back(x);
}

template <typename T> 
void ArrayList<T>::remove(int i){
    ArrayList::data.erase(ArrayList::data.begin()+i);
}

template <typename T> 
void ArrayList<T>::removeAll(){
    ArrayList::data.clear();
}

template <typename T> 
bool ArrayList<T>::isEmpty(){
    if (ArrayList::data.size() == 0) {
        return true;
    } else {
        return false;
    }
}

template <typename T> 
int ArrayList<T>::indexOf(T x) {

    // by default, it directly checks the primitive values and memory references directly 
    for (int i = 0; i < data.size(); i++){
        if (x == data[i]){
            return i;
        }
    }
    return -1;
}

template <typename T> 
T ArrayList<T>::get(int i){
    return ArrayList::data[i];
}

template <typename T> 
T ArrayList<T>::set(int i, T x){
    T y = ArrayList::data[i];
    ArrayList::data[i] = x;
    return y;
}

template <typename T> 
ArrayList<T> ArrayList<T>::subList(int i1, int i2){
    vector<T> slice_of_data(ArrayList::data.begin()+i1, ArrayList::data.begin()+i2);
    return ArrayList(slice_of_data);
}

template <typename T> 
void ArrayList<T>::printString(){
    cout << "Current array: ";
    for (int i = 0; i < ArrayList::data.size(); i++) {
        cout << ArrayList::data[i];
        if (i < ArrayList::data.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

// explictly instantiation for all the types this class will be used with
template class ArrayList<int>;
template class ArrayList<double>;
template class ArrayList<string>;
template class ArrayList<Vertex*>;