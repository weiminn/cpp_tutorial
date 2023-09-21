#include <iostream>
#include <vector>
#include "linkedlist.hpp"
#include "arraylist.hpp"

using namespace std;

template <typename T> 
LinkedNode<T>::LinkedNode(T value) {
    LinkedNode::value = value;
    LinkedNode::next = nullptr;
    LinkedNode::prev = nullptr;
}

template <typename T> 
LinkedList<T>::LinkedList(ArrayList<T> arr) {
    if (!arr.isEmpty()){
        LinkedList::head = nullptr;
        LinkedList::tail = nullptr;
    }

    LinkedNode<T> headNode = LinkedNode<T>(arr.get(0));
    LinkedList::head = &headNode;
    LinkedNode<T> tailNode = LinkedNode<T>(arr.get(arr.getSize()-1));
    LinkedList::tail = &tailNode;

    // set next's
    int i = 0;
    LinkedNode<T> *currNode = &(*LinkedList::head);
    while(i < arr.getSize()-1){
        if (i < arr.getSize()-2){
            // create new node and set it as next
            LinkedNode<T> newNode = LinkedNode<T>(arr.get(i+1));
            currNode->next = &newNode;
        }
        else if (i == arr.getSize()-2){ 
            // if you're at second last, then set next it to tail
            currNode->next = &(*LinkedList::tail);
        }
        i++;
    }

    // set prev's
    LinkedNode<T> *iNode = &(*(LinkedList::head));
    while(iNode->next != nullptr){
        LinkedNode<T> *jNode = &(*(iNode->next));
        jNode->prev = &(*(iNode));
    }
}

// template <typename T> 
// int ArrayList<T>::getSize(){
//     return ArrayList::data.size();
// }

// template <typename T> 
// void ArrayList<T>::add(T x){
//     ArrayList::data.push_back(x);
// }

// template <typename T> 
// void ArrayList<T>::remove(int i){
//     ArrayList::data.erase(ArrayList::data.begin()+i);
// }

// template <typename T> 
// void ArrayList<T>::removeAll(){
//     ArrayList::data.clear();
// }

// template <typename T> 
// bool ArrayList<T>::isEmpty(){
//     if (ArrayList::data.size() == 0) {
//         return true;
//     } else {
//         return false;
//     }
// }

// template <typename T> 
// T ArrayList<T>::get(int i){
//     return ArrayList::data[i];
// }

// template <typename T> 
// T ArrayList<T>::set(int i, T x){
//     T y = ArrayList::data[i];
//     ArrayList::data[i] = x;
//     return y;
// }

// template <typename T> 
// ArrayList<T> ArrayList<T>::subList(int i1, int i2){
//     vector<T> slice_of_data(ArrayList::data.begin()+i1, ArrayList::data.begin()+i2);
//     return ArrayList(slice_of_data);
// }

// template <typename T> 
// void ArrayList<T>::printString(){
//     cout << "Current array: ";
//     for (int i = 0; i < ArrayList::data.size(); i++) {
//         cout << ArrayList::data[i];
//         if (i < ArrayList::data.size() - 1) {
//             cout << ", ";
//         }
//     }
//     cout << endl;
// }

// explictly instantiation for all the types this class will be used with
// template class LinkedNode<int>;
// template class LinkedNode<double>;
// template class LinkedNode<string>;
template class LinkedList<int>;
template class LinkedList<double>;
template class LinkedList<string>;