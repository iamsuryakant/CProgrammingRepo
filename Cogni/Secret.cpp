#include<bits/stdc++.h>

using namespace std;

int reverse(int num)
{
    int rev=0;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    return rev;
}

int main()
{
    int n;
    cin >> n; //45672

    //int num = reverse(n); 
    int temp = n; //temp = 45672
    int res = 0;

    while(temp != 0)
    {
        int rem = temp%10; // rem = 2;

        if(rem%2 == 0)
        {
            rem = rem+1; //rem = 3;
        }
        else{
            rem = rem-1;
        }
        res = res*10 + rem; 
        temp = temp/10;
    }

    int res1 = reverse(res);
    cout<<res1<<endl;
    return 0;
}
