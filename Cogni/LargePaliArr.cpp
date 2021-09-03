#include<bits/stdc++.h>

using namespace std;

// int len(int num){

//     int count = 0;
//     while(num > 0)
//     {
//         count++;
//         num = num/10;
//     }

//     return count;
// }


bool isPali(int num){

    int temp = num;
    int rev = 0;
    while(num > 0){

        rev = rev*10 + num%10;
        num = num/10;
    }

    if(temp == rev){
        return true;
    }
    return false;
}

int main(){

    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin>> arr[i];

    sort(arr, arr + n);
    int res = 0;

    for(int i = 0; i < n; i++)
    {
        if(isPali(arr[i]))
            res = arr[i];
    }


    cout<< res << endl;

    return 0;
    
}