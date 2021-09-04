#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    if(n <= 0)
        cout<<"Invalid Input Range"<<endl;
    
    else{

        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++){

            if(a[i] < 50){
                //cout<<"Fail"<<endl;
                count1++;
            }

            else{

                count2++;
            }

        }

        if(count2 == n){
            cout<<"Pass In all Subject"<<endl;

        }

        if(count1 == n){
            cout<<"Fail In all Subject"<<endl;
        }

        if(count1 != n && count2 != n){
            cout<<"Pass In "<<count2<<" Subject"<<endl;
            cout<<"Fail In "<<count1<<" Subject"<<endl;
        }
    }

    return 0;
}