#include<bits/stdc++.h>

using namespace std;

int main(){

    char s[100];

    cin>>s;

    int i, j, n = 0;

    n = strlen(s);

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' 
           ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ){
            
            for(j = i; j < n; j++)
            {
                s[j] = s[j+1]; 
            }
        
            i--;
            n--;

        }
        
    }

    cout<<s;
}