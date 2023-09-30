#pragma once

#include "arraylist.hpp"
#include "vertex.hpp"
#include "graph.hpp"

using namespace std;

// You need to wrap your object inside the LinkedNode before you add them to the LinkedList
template <typename T, typename V>
class Graph {
    private:
        ArrayList<Vertex<T, V>*>* vertices;
        // todo: create Edge class for weighted digraph

    public:
        Graph();
        void addVertex(Vertex<T, V>* vertex);
        void addEdge(Vertex<T, V>* from, Vertex<T, V>* to);

        // for now, we only remove via string label, 
        // so you need the labels to be unique
        void removeVertex(string vertex);
        void removeEdge(string from, string to);

        void printGraph();
};