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

    // cout << head << endl;
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
    } 
    // Assign to tail if size is 1 (no tail)
    else if (tail == NULL){
        tail = newNode;
        head->next = newNode;
        tail->prev = head;
    } else {
  
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
}

template <typename T> 
void LinkedList<T>::add(T x, int n){
    if (size < 1){
        add(x);
        return;
    }

    // Create the new Node.
    LinkedNode<T>* newNode = new LinkedNode<T>(x);
    size++;

    // get nth node
    LinkedNode<T>* nthNode = get(n);

    if (nthNode == head){
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    } else {
        nthNode->prev->next = newNode;
        newNode->prev = nthNode->prev;
        nthNode->prev = newNode;
        newNode->next = nthNode;        
    }
}

template <typename T> 
int LinkedList<T>::getSize(){
    return size;
}

template <typename T> 
void LinkedList<T>::remove(int n){
    // cout << "(Size: " << getSize() << ") ";

    // get nth node
    LinkedNode<T>* nthNode = get(n);

    if (nthNode == head){
        
        // nthNode might be head == tail after dequeuing
        if (head != tail){
            nthNode->next->prev = NULL;
            head = nthNode->next;
        } else {
            head = NULL;
            tail = NULL;
        }
        
        delete nthNode;
    } else if (nthNode == tail){
        
        // nthNode might be head == tail after dequeuing
        if (head != tail){
            nthNode->prev->next = NULL;
        } // else case already handled by the preceding block
        
        tail = nthNode->prev;
        delete nthNode;
    } else {
        nthNode->prev->next = nthNode->next;
        nthNode->next->prev = nthNode->prev;
        delete nthNode;
    }
    size--;

}

template <typename T> 
void LinkedList<T>::removeRecurse(LinkedNode<T> *currNode){
    if (currNode->next != NULL){
        removeRecurse(currNode->next);
    }
    delete currNode;
}

template <typename T> 
void LinkedList<T>::removeAll(){
    removeRecurse(head);
    size = 0;
    head = NULL;
    tail = NULL;
}

template <typename T> 
bool LinkedList<T>::isEmpty(){
    return head == NULL && tail == NULL && size == 0; 
}

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

template <typename T> 
void LinkedList<T>::printString(){

    // cout << "(Size: " << getSize() << ") ";

    cout << "Forward Traversal: ";
    LinkedNode<T> *currNode = head;
    while(currNode != NULL){
        cout << currNode->value << " ";
        currNode = currNode->next;
    }
    cout << endl;

    cout << "Backward Traversal: ";
    currNode = tail;
    
    // you need to point to head if tail is null cos the head is still non-null
    if (size == 1) {
        currNode = head;
    }

    while(currNode != NULL){
        cout << currNode->value << " ";
        currNode = currNode->prev;
    }
    cout << endl;

}

// explictly instantiation for all the types this class will be used with
template class LinkedList<int>;
template class LinkedList<double>;
template class LinkedList<string>;