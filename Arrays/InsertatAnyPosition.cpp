#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, val, pos;
    cin>>n;

    int arr[n];
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        cin>>pos>>val;
    }

    if(pos != 0 && pos > n)
    {
        cout<<"Insertion Failed";
    }

    v.push_back(val);

    for(int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }
    for(int j = 0; j < n; j++)
    {
        cout<<"Value at x"<<"["<<j<<"]= "<<arr[j]<<endl;
    }

}