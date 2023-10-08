#pragma once

#include "graph.hpp"

using namespace std;

// You need to wrap your object inside the LinkedNode before you add them to the LinkedList
template <typename T, typename V>
class Tree: 

    // must include the template <T, V> for the parent class as well!
    public Graph<T, V> 

{
    public:
        Tree();
};