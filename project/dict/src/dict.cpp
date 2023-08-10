#include <iostream>
#include <map>
#include <vector>
#include "dict.hpp"

using namespace std;

// definition: actually reserves memory
map<string, vector<int>> dict; 

void printValues(map<string, vector<int>> &dict, string str){
    cout << str << ": ";
    for (int i = 0; i < dict[str].size(); i++){
        cout << ", " << dict[str][i];
    } 
    cout << "." << endl;
}

void addValue(map<string, vector<int>> &dict, string str, int value){
    vector<int> &vec = dict[str];
    vec.push_back(value);
    printValues(dict, str);
}