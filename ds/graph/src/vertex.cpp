#include <iostream>
#include <vector>
#include "arraylist.hpp"
#include "vertex.hpp"

using namespace std;

Vertex::Vertex(string lbl){
    label = lbl;
    inEdges = new ArrayList<Vertex*>();
    outEdges = new ArrayList<Vertex*>();
}

void Vertex::addInEdge(Vertex* vertex){
    if (inEdges->indexOf(vertex) < 0){    
        inEdges->add(vertex);
    }
}

void Vertex::removeInEdge(string lbl){
    for (int i = 0; i < inEdges->getSize(); i++){
        if (inEdges->get(i)->label == lbl){
            inEdges->remove(i);
        }
    }
}

void Vertex::addOutEdge(Vertex* vertex){
    if (outEdges->indexOf(vertex) < 0){    
        outEdges->add(vertex);
    }
}

void Vertex::removeOutEdge(string lbl){
    for (int i = 0; i < outEdges->getSize(); i++){
        if (outEdges->get(i)->label == lbl){
            outEdges->remove(i);
        }
    }
}