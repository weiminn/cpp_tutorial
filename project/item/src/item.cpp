#include <iostream>
#include <vector>
#include "../../person/inc/person.hpp"
#include "../inc/item.hpp"

using namespace std;

Item::Item(string Title, vector<Person> Persons){
    title = Title;
    persons = Persons;
    cout << "Created " << title << " by";
    for (int i = 0; i < persons.size(); i++){
        cout << ", " << persons[i].getName();
    } 
    cout << "." << endl;
}

string Item::getTitle(){
    return title;
}

vector<Person> Item::getPersons(){
    return persons;
}

void Item::addPerson(Person person){
    persons.push_back(person);
}