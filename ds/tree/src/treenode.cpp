#include <iostream>
#include <vector>
#include "treenode.hpp"
#include "vertex.hpp"

using namespace std;

template <typename T, typename V> 
TreeNode<T, V>::TreeNode(T lbl, V val): Vertex<T, V>::Vertex(lbl, val) {}

// explictly instantiation for all the types this class will be used with
template class TreeNode<int, string>;