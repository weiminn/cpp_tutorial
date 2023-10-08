#include <iostream>
#include <vector>
#include "graph.hpp"
#include "treenode.hpp"
#include "tree.hpp"

using namespace std;

template <typename T, typename V> 
Tree<T, V>::Tree(): Graph<T, V>::Graph() {}

// explictly instantiation for all the types this class will be used with
template class Tree<int, string>;