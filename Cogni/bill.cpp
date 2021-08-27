#include<bits/stdc++.h>

using namespace std;

int main(){

    int pizza = 100;
    int puff = 20;
    int colddrink = 10;

    int a, b, c;

    cout<<"Enter the no. of pizza bought"<<endl;
    cin>>a;
    cout<<"Enter the no. of puff bought"<<endl;
    cin>>b;
    cout<<"Enter the no. of colddrink bought"<<endl;
    cin>>c;

    cout<<"Bill Details"<<endl;

    cout<<"No of pizzas: "<<a<<endl;
    cout<<"No of puffs: "<<b<<endl;
    cout<<"No of coldrinks: "<<c<<endl;

    cout<<"Total price="<<pizza*a + puff*b + colddrink*c<<endl; 
    cout<<"ENJOY THE SHOW!!!";
    return 0;


}