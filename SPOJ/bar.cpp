#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    int old = 1000000000;

    while(n != 0)
    {
        int rem = n%10;
        
        if(rem < old)
        {
            old = rem;
        }
        n = n/10;
    }

    cout<<old<<endl;
}