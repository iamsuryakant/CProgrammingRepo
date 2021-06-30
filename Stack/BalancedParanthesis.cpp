#include<bits/stdc++.h>

using namespace std;

bool matching(char a, char b) {

    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool isbalanced(string str)
{
    stack<int> st;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            st.push(str[i]);
        }
        else {
            if(st.empty() == true)
                return false;
            
            else if(matching(st.top(), str[i])== false)
                return false;
            else
                st.pop();

        }
    }
    return (st.empty() == true);
}

int main(){
    int T;
    cin>>T;

    while(T--)
    {
    string str;
    cin>>str;
    cout<<isbalanced(str);
    }
    return 0;
}