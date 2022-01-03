#include <bits/stdc++.h>

using namespace std;

int countWord(string s)
{
    stringstream str(s);
    string words;
    int count = 0;
    while(str>>words)
    {
        count++;
    }

    return count;
}





int main(){
    string s;
    getline(cin, s);

    cout << countWord(s) << endl;

    return 0;
}