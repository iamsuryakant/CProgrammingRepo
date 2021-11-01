#include<bits/stdc++.h>

using namespace std;

int main(){

    double number, sum = 0;

    do{
        cin >> number;
        sum += number;
    }while(number != 0.0);
    
    cout<<sum<<endl;
}