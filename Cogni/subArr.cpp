#include<bits/stdc++.h>

int subArr(int arr[], int n){

    std::unordered_set<int> s;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(s.find(sum) != s.end())
            return 1;
        else{
            s.insert(sum);
        }

    }
    return 0;
}

int main() {

    int n; std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

   if(subArr(arr, n)) {
       std::cout << "YES";
   } else {
       std::cout << "NO";
   }

}