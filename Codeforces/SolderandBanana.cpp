#include<bits/stdc++.h>

using namespace std;

int main(){

    int k, n, w;
    cin>>k>>n>>w;

    int cost = 0;

    for(int i = 1; i<=w; i++)
    {
        cost += i*k;
    }

    int borrow = cost - n;

    if(borrow <= 0)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<borrow<<endl;
    }
    return 0;
}