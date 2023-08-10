#pragma once

#include <iostream>
#include <map>
#include <vector>

using namespace std;

// declaration: only tells the compiler of the existence of dict
extern map<string, vector<int>> dict; 

void printValues(map<string, vector<int>> &dict, string str);

void addValue(map<string, vector<int>> &dict, string str, int value);