#include<bits/stdc++.h>

using namespace std;

class Account{

    public:
    
    float salary = 600000;
};

class Programmer:public Account{
    public:
    float bonus = 5000;
};

int main(){

    Programmer p1;
    cout<<"Salary: "<<p1.salary<<endl;
    cout<<"bonus: "<<p1.bonus<<endl;

    return 0;

}