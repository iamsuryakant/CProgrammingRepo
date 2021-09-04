#include<bits/stdc++.h>

using namespace std;

int main(){

    int n1, n2,flag = 0, k = 0;
    cin>>n1;
    int arr1[n1];
    if(n1 > 0){
        //cout<<"Invalid array size";
        for(int i = 0; i < n1; i++)
            cin>>arr1[i];

        cin>>n2;
        int arr2[n2];

        if(n2 > 0){

            for(int i = 0; i < n2; i++)
                cin>>arr2[i];

            if(n1 == n2)
            {
                for(int i = 0; i < n1; i++)
                {
                    if(arr1[i] >= arr2[i])
                    {
                        //continue;
                        k++;
                    }
                }

                if(k == n1)
                {
                    cout<<"Array is Compatible"<<endl;
                }
                else{
                    cout<<"Array is Not Compatible"<<endl;
                }

            }
            else{
                cout<<"Array is not Compatible"<<endl;
            }

        }
        else{
            cout<<"Invalid array size"<<endl;
        }
        
        }
        else{
            cout<<"Invalid array size";
        
        }
    return 0;

}