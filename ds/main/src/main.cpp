#include <iostream>
#include "arraylist.hpp"
#include "linkedlist.hpp"
#include "queue.hpp"
#include "stack.hpp"
#include "vertex.hpp"
#include "graph.hpp"

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
    cout << "Empty? " << ll.isEmpty() << endl;

    cout << "3 ATB" << endl;
    ll.add(15, 2);
    ll.printString();

    cout << "Injury Crisis" << endl;
    ll.remove(3);
    ll.remove(1);
    ll.add(33, 1);
    ll.remove(0);
    ll.remove(2);
    ll.add(8, 1);
    ll.printString();

    cout << "Removing all" << endl;
    ll.removeAll();
    cout << "Empty? " << ll.isEmpty() << endl;
    ll.printString();
    cout << ll.head << endl;

    cout << "============================" << endl;
    Queue<int> cm = Queue<int>();
    cm.enqueue(30);
    cm.enqueue(29);
    cm.printString();
    
    cout << "Pecking order: " << *cm.dequeue() << ", and " << *cm.dequeue() << endl;
    cm.printString();
    cout << "Recall " << endl;
    cm.enqueue(5);
    // will give error cos no tail yet: cout << "Tail: " << cm.tail->value << endl;
    // cm.enqueue(41);
    cm.printString();

    cout << "============================" << endl;
    Stack<int> leaders = Stack<int>();
    leaders.push(7);
    leaders.push(10);
    leaders.push(17);
    leaders.printString();

    cout << "Subbing out: " << *leaders.pop() << endl;
    // cout << "Subbing out: " << *leaders.pop() << ", and " << *leaders.pop() << endl;
    leaders.printString();

    cout << "Glass ankles." << endl;
    leaders.pop();
    leaders.push(4);
    leaders.printString();

    cout << "============================" << endl;
    Graph<string,int> nikoverse = Graph<string, int>();
    Vertex<string, int> v1 = Vertex<string, int>("Nikocado", 0);
    Vertex<string, int> v2 = Vertex<string, int>("Amberlynn", 0);
    Vertex<string, int> v3 = Vertex<string, int>("Oompaville", 0);
    Vertex<string, int> v4 = Vertex<string, int>("Papa Meat", 0);
    Vertex<string, int> v5 = Vertex<string, int>("Penguinz0", 0);
    nikoverse.addVertex(&v1);
    nikoverse.addVertex(&v2);
    nikoverse.addVertex(&v3);
    nikoverse.addVertex(&v4);
    nikoverse.addVertex(&v5);
    nikoverse.addEdge(&v2, &v1);
    nikoverse.addEdge(&v3, &v1);
    nikoverse.addEdge(&v4, &v1);
    nikoverse.addEdge(&v5, &v1);
    nikoverse.addEdge(&v1, &v3);
    nikoverse.addEdge(&v4, &v3);
    nikoverse.addEdge(&v4, &v5);
    nikoverse.addEdge(&v3, &v4);
    nikoverse.printGraph();

    cout << "============================" << endl;

    
    return 0;
}