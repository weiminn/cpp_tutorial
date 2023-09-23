#include <iostream>
#include <vector>
#include "linkedlist.hpp"
#include "arraylist.hpp"

using namespace std;

template <typename T> 
LinkedNode<T>::LinkedNode(T _value) {
    value = _value;
    next = NULL;
    prev = NULL;
}

template <typename T> 
LinkedList<T>::LinkedList() {
    head = NULL;
    tail = NULL;
    size = 0;
}

template <typename T> 
LinkedList<T>::LinkedList(ArrayList<T> arr) {
    LinkedList();

    if (!arr.isEmpty()){
        for (int i = 0; i < arr.getSize(); i++){
            add(arr.get(i));
        }
    }

}

template <typename T>
void LinkedList<T>::add(T x){
    
    // Create the new Node.
    LinkedNode<T>* newNode = new LinkedNode<T>(x);
    size++;
  
    // Assign to head if size is 0 (empty)
    if (head == NULL) {
        head = newNode;
        return;
    } 
    // Assign to tail if size is 1 (no tail)
    else if (tail == NULL){
        tail = newNode;
        head->next = newNode;
        tail->prev = head;
        return;
    }
  
    // Naive, O(n^2): Traverse till end of list
    // LinkedNode<T>* temp = head;
    // while (temp->next != NULL) {
    //     // Update temp
    //     temp = temp->next;
    // }
    // // Insert at the last.
    // temp->next = newNode;

    // Efficient, O(n): Insert from tail
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

template <typename T> 
int LinkedList<T>::getSize(){
    return size;
}

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

template <typename T> 
LinkedNode<T>* LinkedList<T>::get(int n){

    int i = 0;
    LinkedNode<T> *currNode = head;
    while(i < n){
        currNode = currNode->next;
        i++;
    }

    return currNode;
}

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

template <typename T> 
void LinkedList<T>::printString(){

    cout << "Forward Traversal: ";
    LinkedNode<T> *currNode = head;
    while(currNode != NULL){
        cout << currNode->value << " ";
        currNode = currNode->next;
    }
    cout << endl;

    cout << "Backward Traversal: ";
    currNode = tail;
    while(currNode != NULL){
        cout << currNode->value << " ";
        currNode = currNode->prev;
    }
    cout << endl;

}

// explictly instantiation for all the types this class will be used with
// template class LinkedNode<int>;
// template class LinkedNode<double>;
// template class LinkedNode<string>;
template class LinkedList<int>;
template class LinkedList<double>;
template class LinkedList<string>;