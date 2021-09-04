#include<bits/stdc++.h>

using namespace std;

int isDisjoint(int arr[], int arr1[], int n1, int n2) {

    int res = 0;
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr[i] == arr1[j])
                return -1;
        }
    }
    return res;

}

int main(){

    int n1, n2;
    cin>>n1>>n2;

    int arr[n1];
    int arr1[n2];

    for(int i = 0; i < n1; i++)
        cin>>arr[i];

    for(int i = 0; i < n2; i++)
        cin>>arr1[i];

    int res = isDisjoint(arr, arr1, n1, n2);

    if(res == -1)
        cout<<"Not Disjoint"<<endl;
    else{
        cout<<"Disjoint"<<endl;
    }

    return 0;
}