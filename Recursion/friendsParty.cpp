#include<bits/stdc++.h>

using namespace std;

int friendsParty(int n)
{
    // how n friends can go to party
    //Base case

    if(n == 1 || n== 2)
        return n;

    return friendsParty(n-1) + (n-1) * friendsParty(n-2);

}

int main(){

    cout<<friendsParty(4);
    
    return 0;
}