#include <bits/stdc++.h>

using namespace std;

int main(){

    int s, n, m;
    cin>>s>>n>>m;

    int res = (int) pow(fmod(pow(s,n),10), m) % 1000000007;

   cout<<res<<endl;
}