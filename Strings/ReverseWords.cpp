#include <bits/stdc++.h>

using namespace std;

void reverseWords(string s)
{
    vector<string> temp;
    string str = "";
    string res = "";

    for (int i = 0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back(str);
            str = " ";
        }
        else{
            str += s[i];
        }
    }

    temp.push_back(str);

    for (int i = temp.size()-1; i > 0; i--)
    {
        cout << temp[i] << " ";
    }
    cout << temp[0] << " ";
}


int main(){

    string s;

    getline(cin, s);

    reverseWords(s);

    return 0;
}