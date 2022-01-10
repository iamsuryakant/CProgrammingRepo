#include <bits/stdc++.h>

using namespace std;


int minimumNet(int n, int k, int arr[])
{
    // Write your code here.
  // vector<int> ans;
    int sum = 0;

    int i = 1;

//    ans.push_back(i);
    int count = i;

    for(int i )

    while(i<=k)
    {
        sum += arr[i];
        i++;
        count++;
    }
   // ans.push_back(i);

   if(sum < count)
   {
       cout << "-1" << endl;
   }
   else{
       cout << count;
   }
   
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<minimumNet(n, k, arr);
}