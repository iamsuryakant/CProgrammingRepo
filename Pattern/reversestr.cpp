#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; 
    getline(cin, s);

    int len = s.length();

    int st, ei;
    ei = len-1;
    for(int i = len-1; i >= 0; i--)
    {
        if(s[i] == ' ' || i == 0)
        {
            if(i == 0)
                st =0;

            else{
                st = i+1;
            }

            for(int j = st; j<= ei; j++)
            {
                cout<<s[j];
            }

            ei = i-1;
            cout<<" ";

        }
    }

}