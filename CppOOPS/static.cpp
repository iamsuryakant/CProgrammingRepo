#include<bits/stdc++.h>

using namespace std;

class Account{

    public:

        int accountno;
        string name;
        static int count;

        Account(int accountno, string name)
        {
            this->accountno = accountno;
            this->name = name;
            count++;
        }

        void display()
        {
            cout<<accountno<<" "<<name<< endl;
        }
};

int Account::count = 0;

int main(){

    Account a1 = Account(123, "Surya");
    Account a2 = Account(134, "Arin");

    a1.display();
    a2.display();

    cout<<"Count is:"<<Account::count;

    return 0;

}