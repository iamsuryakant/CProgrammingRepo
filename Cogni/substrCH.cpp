#include<bits/stdc++.h>

using namespace std;

string isContain(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int flag =1, i, j;
    for(i = 0; i <= n1-n2; i++)
    {
        flag = 1;
        for(j = 0; j<n2; j++)
        {
            if(s1[i+j] != s2[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1 && j == n2)
        {
            return "Yes";
        }
    }
    return "No";
}

int main(){

    int t; cin>>t;

    while(t--){

        string s1, s2;
        cin>>s1>>s2;

       cout<<isContain(s1,s2)<<endl;


    }
}