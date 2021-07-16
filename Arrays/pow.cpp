#include <bits/stdc++.h>

using namespace std;

int main(){

    int b = 32;

    if((b & b-1) == 0){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not power of 2";
    }    
}