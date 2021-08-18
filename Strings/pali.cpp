#include<bits/stdc++.h>

using namespace std;

bool pali(string str, int s, int e)
{
    //int s = 0, e = s.length() - 1;
    int n = str.length();

    if(n == 0 || n == 1)
        return true;

    if(s < e){

        if(str[s] != str[e])
            return false;
        
        return pali(str, s+1, e-1);
    }

    return true;
    
}

int main() {

    string s = "abba";
    cout<<pali(s, 0, s.length() - 1)<<endl;
    return 0;
}