#include<bits/stdc++.h>

using namespace std;

class Employee{

    public:

        // Employee(){
        //     cout<<"Default constructor"<<endl;
        // }

        int id;
        string name;
        int salary;

        Employee(int i, string n, int s)
        {
            id = i;
            name = n;
            salary = s;
        }

        void display()
        {
            cout<<id<<" "<<name<<" "<<salary<<endl;
        }
};

int main(){

    Employee e1 = Employee(1, "Surya",30000);
    Employee e2 = Employee(2,"Ram", 40000);
    e1.display();
    e2.display();

    return 0;
}