#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter number of courses: ";
    cin>>n;

    if(n <= 0 || n> 20) {

        cout<<"Invalid Range";
    }
    else{

        vector<string> s(n);
        cout<<"Enter course name: "<<endl;
        for(int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        string k;
        cout<<"Enter the course to be searched:";
        cin>>k;


        int flag = 0;
        for(int i = 0; i< n; i++)
        {
            if(s[i] == k)
            {
                cout<<k<<" Course is available";
                flag = 1;
            }
            
        }
        if(flag == 0)
        {
            cout<<k<<" Course is not available";
        }

    }

    return 0;

}