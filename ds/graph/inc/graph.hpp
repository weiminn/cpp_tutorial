#pragma once

#include "arraylist.hpp"
#include "vertex.hpp"
#include "graph.hpp"

using namespace std;

// You need to wrap your object inside the LinkedNode before you add them to the LinkedList
class Graph {
    private:
        ArrayList<Vertex*>* vertices;
        // todo: create Edge class for weighted digraph

    public:
        Graph();
        void addVertex(Vertex* vertex);
        void addEdge(Vertex* from, Vertex* to);

        // for now, we only remove via string label, 
        // so you need the labels to be unique
        void removeVertex(string vertex);
        void removeEdge(string from, string to);

        void printGraph();
};