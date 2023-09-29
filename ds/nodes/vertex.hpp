#pragma once

#include "arraylist.hpp"

using namespace std;

class Vertex {
    private:

    public:
        Vertex(string lbl);
        string label;

        ArrayList<Vertex*>* inEdges;
        void addInEdge(Vertex* vertex);
        void removeInEdge(string lbl); // for now, remove is done via labels, so labels must be unique

        // you have both in and out for bidirectional
        ArrayList<Vertex*>* outEdges;
        void addOutEdge(Vertex* vertex);
        void removeOutEdge(string lbl);
};