#include <iostream>
#include "../inc/person.hpp"

using namespace std;

Person::Person(string Name, int BirthYear){
    name = Name;
    birthYear = BirthYear;
    cout << "Hi, I'm " << name << " born in " << birthYear << "!" << endl;
}

string Person::getName(){
    return name;
}

int Person::getBirthYear(){
    return birthYear;
}