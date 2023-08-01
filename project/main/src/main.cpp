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

    return 0;
}
