#include<bits/stdc++.h>

using namespace std;


int main() {

    double salary, rating;
    cout<<"Enter Salary:"<<endl;
    cin>>salary;
    cout<<"Enter rating:"<<endl;
    cin>>rating;

    if(salary <= 0 || rating > 5){
        cout<<"Invalid Input";
    }

    else{

        if(rating >= 1 && rating <= 3)
        {
            salary = salary + salary*0.1;
            cout<<salary<<endl;
        }

        else if(rating >= 3.1 && rating <= 4)
        {
            salary = salary + salary*0.25;
            cout<<salary<<endl;
        }

        else if(rating >= 4.1 && rating <= 5)
        {
            salary = salary + salary*0.3;
            cout<<salary<<endl;
        }
    }

    return 0;

}