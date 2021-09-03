#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cin>>num;
    int newNum = 0;

    if(num == 0)
    {
        newNum = 1;
    }
    while(num > 0)
    {
        int rem = num%10;

        if(rem == 0)
        {
            rem = 1;
        }

        num = num/10;

        newNum = newNum*10 + rem;


    }

    cout<<newNum<<endl;


}