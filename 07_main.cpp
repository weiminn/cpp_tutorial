#include <iostream>
#include "07_food.h"

using namespace std;

int main(int argc, char const *argv[])
{

    // compile the header and implementation files first before running this!!!
    // g++ -g 07_main.cpp 07_food.cpp 07_food.h -o 07_main
    // ./07_main

    cout << "Today, I'll eat " << recommendMeAFood('c') << endl;

    return 0;
}
