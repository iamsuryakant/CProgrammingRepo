#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;

    int arr[n];
   // int sum = 0;

    vector<int> vec;

    for(int i = 0; i < n; i++){
        cin>>arr[i];

    }

    for(int i = 0; i < n; i++)
    {
        int n = arr[i];
        int sum = 0;
        while(n != 0)
        {
            sum += n%10;
            n = n/10;
        }
        vec.push_back(sum);
    }

    for(int i = 0; i < n; i++){
        cout<<vec[i]<<" ";
    }

    return 0;

}