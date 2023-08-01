#pragma once

#include <iostream>
#include <vector>
#include "../../person/inc/person.hpp"

using namespace std;

class Item
{
    private:
        string title;
        vector<Person> persons;

    public:
        Item(string title, vector<Person> persons);

        string getTitle();
        vector<Person> getPersons();

        void addPerson(Person person);
};
