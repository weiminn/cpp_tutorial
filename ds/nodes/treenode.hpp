#pragma once

#include "vertex.hpp"

using namespace std;

template <typename T, typename V>
class TreeNode: 
public Vertex<T, V> {
    private:

    public:
        TreeNode(T lbl, V val);
};