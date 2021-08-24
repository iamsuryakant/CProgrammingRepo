#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; cin>>s;

    int len = s.length();

    int st = 0, e = len - 1;


    for(int i = 0; i<len; i++)
    {
        int j = len - i - 1;

        for (int k = 0; k <len; k++)
        {
            if(k == i || k == j)
            {
                cout<<s[k]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}