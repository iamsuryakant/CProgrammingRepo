#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1, s2;

    cin>>s1>>s2;
    int flag = 0;
    for(int i = 0; i<s1.length() && i<=s2.length(); i++)
    {
            if(s1[i] != s2[i])
            {
                cout<<s1[i];
                flag = 1;
                break;
                
            }
    }

    if(flag == 0)
    {
        cout<<"NA";
    }

    return 0;
}