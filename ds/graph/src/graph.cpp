#include <iostream>
#include <vector>
#include "arraylist.hpp"
#include "vertex.hpp"
#include "graph.hpp"

using namespace std;

Graph::Graph(){
    vertices = new ArrayList<Vertex*>();
}

void Graph::addVertex(Vertex* vertex) {
    cout << "Adding " << vertex->label << endl;
    vertices->add(vertex);
}

void Graph::addEdge(Vertex* from, Vertex* to){
    cout << "Connecting " << from->label << " to " << to->label << endl;
    from->addOutEdge(to);
    to->addInEdge(from);
}

Vertex* getVertexbyLabel(ArrayList<Vertex*>* arr, string label){
    for (int i = 0; i < arr->getSize(); i++){
        if (label == arr->get(i)->label){
            return arr->get(i);
        }
    }
    return NULL;
}

void Graph::removeEdge(string from, string to){
    Vertex* fromVertex = getVertexbyLabel(vertices, from);
    Vertex* toVertex = getVertexbyLabel(vertices, to);

    fromVertex->removeOutEdge(from);
    toVertex->removeInEdge(to);
}

void Graph::printGraph(){
    cout << "Printing Graph" << endl;
    for (int i = 0; i < vertices->getSize(); i++){
        Vertex* vertex = vertices->get(i);
        // cout << "Vertex " << i << ": " << vertex->label << " has " << vertex->outEdges->getSize() << " outgoing" << endl;
        for (int j = 0; j < vertex->outEdges->getSize(); j++){
            Vertex* _vertex = vertex->outEdges->get(j);
            if (_vertex->inEdges->indexOf(vertex) >= 0){
                cout << vertex->label << " -> " << _vertex->label << endl;
            }
        }
    }
}