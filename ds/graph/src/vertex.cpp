#include <iostream>
#include <vector>
#include "arraylist.hpp"
#include "vertex.hpp"

using namespace std;

template <typename T, typename V>
Vertex<T, V>::Vertex(T lbl, V val){
    label = lbl;
    value = val;
    inEdges = new ArrayList<Vertex*>();
    outEdges = new ArrayList<Vertex*>();
}

template <typename T, typename V>
void Vertex<T, V>::addInEdge(Vertex* vertex){
    if (inEdges->indexOf(vertex) < 0){    
        inEdges->add(vertex);
    }
}

template <typename T, typename V>
void Vertex<T, V>::removeInEdge(T lbl){
    for (int i = 0; i < inEdges->getSize(); i++){
        if (inEdges->get(i)->label == lbl){
            inEdges->remove(i);
        }
    }
}

template <typename T, typename V>
void Vertex<T, V>::addOutEdge(Vertex* vertex){
    if (outEdges->indexOf(vertex) < 0){    
        outEdges->add(vertex);
    }
}

template <typename T, typename V>
void Vertex<T, V>::removeOutEdge(T lbl){
    for (int i = 0; i < outEdges->getSize(); i++){
        if (outEdges->get(i)->label == lbl){
            outEdges->remove(i);
        }
    }
}

template class Vertex<string, int>;
