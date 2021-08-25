#include<bits/stdc++.h>

using namespace std;

int countp(int num)
{
    int count = 0;
    while(num%2 == 0)
    {
        count++;
        num = num/2;
    }
    // if(max())
    return count;
}


int main()
{
    int a, b; cin >> a>>b;

    int maxnum = 0, num = 0;

    if(a < b)
    {
       
        for(int i = a; i <= b; i++)
        {
            

            int temp = countp(i);

            if(temp > maxnum){
                maxnum = temp;
                num = i;
            }
           // maxnum = max(maxnum, countp(i));

        //    cout<<i <<" ";
        }
    }
    cout<<num<< "\n";
}