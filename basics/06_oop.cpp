#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void askForPromotion() = 0; // virtual mandates the implementation
};

class Employee:AbstractEmployee {
    public:
        string Name;
    protected:
        string Company;
    private:
        int Age;

    public:
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }

        void setName(string name){
            Name = name;
        }

        string getName(){
            return Name;
        }

        void introduceYourself(){
            cout << "Hello, My name is " << Name << ", I am from " << Company << ", and I am " << Age << " years old." << endl;
        }

        void askForPromotion(){
            if (Age > 30){
                cout << Name << " got promoted!" << endl;
            } else {
                cout << "Sorry, no promotion for " << Name << "." << endl;
            }
        }

        virtual void work(){ // needs to be virtual for polymorphism to flow through
            cout << Name << " is checking email and meeting with team." << endl;
        }

};

class Developer: public Employee { // inheritance is private by default
    private:
        string FavProgLang;

    public:
        Developer(string name, string company, int age, string lang)
            :Employee(name, company, age){
                FavProgLang = lang;
        }

        void fixBug(){
            cout << Name << " just fixed a bug using " << FavProgLang << "." << endl;
        }

        void work(){
            cout << Name << " coding a new feature." << endl;
        }
};

class Teacher: public Employee {
    private:
        string Subject;

    public:
        Teacher(string name, string company, int age, string subject)
            :Employee(name, company, age){
                Subject = subject;
        }
};

int main(int argc, char const *argv[])
{
    int number;
    Employee emp1 = Employee("Sara", "Acendas", 34);
    Employee emp2 = Employee("Jon", "Tryonix", 28);
    emp1.setName("Sardine");
    emp1.introduceYourself();

    emp1.askForPromotion();
    emp2.askForPromotion();

    Developer dev1 = Developer("Eric", "Google", 21, "Python");
    dev1.fixBug();

    Teacher tch1 = Teacher("Sophia", "ACS", 54, "Physics");
    tch1.work();
    dev1.work();

    // Polymorphism
    Employee* e1 = &tch1;
    Employee* e2 = &dev1;

    e1->work();
    e2->work();

    return 0;
}