#include <bits/stdc++.h>

using namespace std;

string replacebyWith(string str)
{
    string replaceby = "%20";
    int n = 0;

    while((n = str.find(" ", n)) != string::npos)
    {
        str.replace(n, 1, replaceby);
        n += replaceby.length();
    }

    return str;
}



int main(){

    string s = "Suryakant Thakur";

    cout<<replacebyWith(s)<<endl;

    return 0;
}