#pragma once

#include "arraylist.hpp"

using namespace std;

template <typename T, typename V>
class Vertex {
    private:

    public:
        Vertex(T lbl, V val);
        T label;
        V value;

        ArrayList<Vertex*>* inEdges;
        void addInEdge(Vertex* vertex);
        void removeInEdge(T lbl); // for now, remove is done via labels, so labels must be unique strings

        // you have both in and out for bidirectional
        ArrayList<Vertex*>* outEdges;
        void addOutEdge(Vertex* vertex);
        void removeOutEdge(T lbl);
};