#include <iostream>
#include <vector>
#include "arraylist.hpp"
#include "vertex.hpp"
#include "graph.hpp"

using namespace std;

template <typename T, typename V>
Graph<T, V>::Graph(){
    vertices = new ArrayList<Vertex<T, V>*>();
}

template <typename T, typename V>
void Graph<T, V>::addVertex(Vertex<T, V>* vertex) {
    cout << "Adding " << vertex->label << endl;
    vertices->add(vertex);
}

template <typename T, typename V>
void Graph<T, V>::addEdge(Vertex<T, V>* from, Vertex<T, V>* to){
    cout << "Connecting " << from->label << " to " << to->label << endl;
    from->addOutEdge(to);
    to->addInEdge(from);
}

template <typename T, typename V>
Vertex<T, V>* getVertexbyLabel(ArrayList<Vertex<T, V>*>* arr, string label){
    for (int i = 0; i < arr->getSize(); i++){
        if (label == arr->get(i)->label){
            return arr->get(i);
        }
    }
    return NULL;
}

template <typename T, typename V>
void Graph<T, V>::removeEdge(string from, string to){
    Vertex<T, V>* fromVertex = getVertexbyLabel(vertices, from);
    Vertex<T, V>* toVertex = getVertexbyLabel(vertices, to);

    fromVertex->removeOutEdge(from);
    toVertex->removeInEdge(to);
}

template <typename T, typename V>
void Graph<T, V>::printGraph(){
    cout << "Printing Graph" << endl;
    for (int i = 0; i < vertices->getSize(); i++){
        Vertex<T, V>* vertex = vertices->get(i);
        // cout << "Vertex " << i << ": " << vertex->label << " has " << vertex->outEdges->getSize() << " outgoing" << endl;
        for (int j = 0; j < vertex->outEdges->getSize(); j++){
            Vertex<T, V>* _vertex = vertex->outEdges->get(j);
            if (_vertex->inEdges->indexOf(vertex) >= 0){
                cout << vertex->label << " -> " << _vertex->label << endl;
            }
        }
    }
}

template class Graph<string, int>;
