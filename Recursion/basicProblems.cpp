#include<bits/stdc++.h>
using namespace std;

// for printing n to 1
/*
void fun(int i, int n)
{
    if(i > n)
    {
        return;
    }

 
    fun(i + 1, n);
    
    cout << i <<endl;
}
*/

// function for reverse the array
/*
void fun(int i, int arr[], int n)
{
    if(i>=n/2)
        return;

    swap(arr[i], arr[n - i - 1]);

    fun(i + 1, arr, n);
}
*/


//function for check if palindrome or not

bool fun(int i, string str, int n)
{
    if(i>=n/2)
    {
        return true;
    }

    if(str[i] != str[n-i-1])
    {
        return false;
    }

    fun(i + 1, str, n);
}

// function for print fibonnaci numbers

int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n - 1) + fib(n - 2);
}


// function for printing subsequences


void printSub(int arr[], vector<int>&ds, int n, int i)
{
    if(i == n)
    {
        for(auto it:ds)
        {
            cout << it << " ";
        }
        if(ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[i]);
    printSub(arr, ds, n, i + 1);
    ds.pop_back();

    // not picl or not take condition

    printSub(arr, ds, n, i + 1);
}


int main()
{
    int n = 3;

    int arr[] = {3, 1, 2};

    vector<int> ds;

    printSub(arr, ds, n, 0);

    // cout << fib(n);

    // string s;
    // cin >> s;

    // // for(int i = 0; i < n; i++)
    // // {
    // //     cin >> arr[i];
    // // }

    // //fun(0, arr, n);

    // if(fun(0, s , n))
    // {
    //     cout << "palindrome" << endl;
    // }
    // else{
    //     cout << "Not palindrome" << endl;
    // }

    // // for(int i = 0; i < n; i++)
    // // {
    // //     cout << arr[i] << " ";
    // // }
}