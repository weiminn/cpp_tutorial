#include <iostream>
#include <vector>
#include "person.hpp"
#include "item.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Person person1 = Person("April", 1997);
    Person person2 = Person("May", 1995);
    vector<Person> personsItem1 = {person1, person2};

    Item item1 = Item("Seasons in the Sun", personsItem1);
    Person person3 = Person("June", 1993);
    item1.addPerson(person3);

    vector<Person> newPersonsItem1 = item1.getPersons();
    cout << "Persons: ";
    for (int i = 0; i < newPersonsItem1.size(); i++){
        cout << ", " << newPersonsItem1[i].getName();
    } 
    cout << "." << endl;

    // Doesn't compile: cannot print instance directly
    // cout << "person1 instance: " << person1 << endl;
    // cout << "person2 instance: " << person2 << endl;

    cout << "Reference to person1: " << &person1 << endl;
    cout << "Reference to person2: " << &person2 << endl;

    Person* person1Ptr = &person1; // recommended syntax
    Person * person2Ptr = &person2; // valid
    Person *person3Ptr = &person3; // valid

    // Doesn't compile: cannot store object inside pointer or reference inside object
    // Person* person1Ptr = person1;
    // Person person2Ptr = &person2;

    cout << "Pointer to person1: " << person1Ptr << endl;
    cout << "Pointer to person2: " << person2Ptr << endl;
    cout << "Pointer to person3: " << person3Ptr << endl;

    return 0;
}
