#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 1; i<=n; i++)
    {
        string s; cin >> s;

        int c = 0;

        if(s.size() <= 10)
        {
            cout<<s<<endl;
        }

        else{


            for(int i = 1; i<= s.size() -2; i++)
            {
                c++;
            }

            vector<string> v;
            
            string s1 = s.substr(0, 1);
            string s2 = s.substr(s.size()-1, 1);

            v.push_back(s1);
            v.push_back(to_string(c));
            v.push_back(s2);


            for(int i = 0; i < v.size(); i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
        
    }
}