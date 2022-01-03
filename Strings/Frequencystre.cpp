#include <bits/stdc++.h>

using namespace std;

void frequency(string s)
{
    unordered_map<string, int> mp;

    stringstream ss(s);
    string words;

    while(ss>>words)
    {
        mp[words]++;
    }

    for(auto it:mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}




int main()
{
    string s;

    getline(cin, s);

    frequency(s);

    return 0;
}