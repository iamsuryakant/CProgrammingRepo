#include<bits/stdc++.h>

using namespace std;

class Employee{

    public:
        int id; // data member also instance variable.
        string name; // data member also instance variable.
        float salary;

        Employee(int id, string name, float salary){

            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        void display(){

            cout<<id<<" "<<name<<" "<<salary<<endl;
        }

};

int main(){

    Employee e1 = Employee(1,"Surya",30000);
    Employee e2 = Employee(2, "Arin", 40000);

    e1.display();
    e2.display();

    return 0;


}