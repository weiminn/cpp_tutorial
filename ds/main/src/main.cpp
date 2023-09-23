#include <iostream>
#include "arraylist.hpp"
#include "linkedlist.hpp"

int main(){

    vector<int> test = {420, 69};
    ArrayList<int> array(test);
    array.printString();

    array.add(666);
    array.printString();
    cout << "1st Element: " << array.get(0) << endl;
    cout << "2nd Element: " << array.get(1) << endl;
    cout << "3rd Element: " << array.get(2) << endl;

    cout << "Replaced " << array.set(2, 37) << " with 37" << endl;
    array.printString();

    array.remove(1);
    array.printString();
    cout << "Empty? " << array.isEmpty() << endl;

    array.removeAll();
    array.printString();
    cout << "Empty? " << array.isEmpty() << endl;

    array.add(13);
    array.add(38);
    array.add(37);
    array.add(17);
    array.add(23);
    array.add(8);
    array.add(29);
    array.add(10);
    array.add(29);
    array.add(27);
    array.add(21);
    array.add(7);
    array.printString();

    ArrayList<int> backline = array.subList(1, 5);
    backline.printString();

    cout << "============================" << endl;

    LinkedList<int> ll(backline);
    ll.printString();
    cout << "Size: " << ll.getSize() << endl;
    cout << "3rd Value: " << ll.get(2)->value << endl;

    // cout << ll->head->value << endl;

    return 0;
}