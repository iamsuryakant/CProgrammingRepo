#include<bits/stdc++.h>

using namespace std;

int sum(int num){

    int s =0;
    while(num != 0) {

        s += num%10;
        num /= 10;
    }
    return s;
}

int main(){

    int num;
    cout<<"Enter car no:";
    cin>>num;

    if(num < 1000 || num > 9999)
    {
        cout<<"Invalid";
    }

    else{

        if(sum(num)%3 == 0 || sum(num)%5 == 0 || sum(num)%7 == 0)
        {
            cout<<"Lucky Number"<<endl;
        }
        else{
            cout<<"Sorry its not my lucky number";
        }

    }
    return 0;
}