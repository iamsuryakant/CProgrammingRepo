#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    int n; cin>>n;
    char s2[n];

    for(int i = 0; i < n; i++)
        cin>>s2[i];
    
    int count = 0;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<s.length(); j++)
        {
            if(s2[i] == s[j])
            {
                count++;
            }
        }
        //cout<<count;
        sum += count*(s2[i]);
        count = 0;
    }
    cout<<sum<<endl;
}