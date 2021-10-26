#include<bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return true;
    return false;
}

int main() {

    string s; cin >> s;

    int n = s.size();

    vector<char> res;

    for(int i = 0; i < n; i++)
    {
        if(isVowel(s[i]) == false)
        {
            res.push_back('.');
            res.push_back(tolower(s[i]));   
        }
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[i];
    }

}