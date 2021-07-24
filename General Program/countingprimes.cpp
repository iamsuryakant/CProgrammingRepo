#include<bits/stdc++.h>

using namespace std;

int primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
           return i;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        return n;
}

int main(){

    int n;
    cin >> n;

    int people[n], ranges[n];

    for(int i = 0; i < n; i++){
        cin >> people[i];
    }
    for(int i = 0; i < n; i++){
        cin >> ranges[i];
    }

    for(int i = 0; i < n; i++){

        if(ranges[i] == 0)
            cout<<"0"<<" ";
            continue;
        else if( people[i-1]/primeFactors(peoples[i]))


}