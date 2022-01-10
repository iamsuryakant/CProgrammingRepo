#include<bits/stdc++.h>

using namespace std;

int eggdrops(int e, int f){

    int res = 0, mini = 1e9;

    if(f == 0 || f == 1)
    {
        return f;
    }

    if(e == 1)
    {
        return f;
    }

    for (int i = 1; i<= f; i++)
    {
        res = max(eggdrops(i - 1, e - 1), eggdrops(f - i, e));

        if(res < mini)
        {
            mini = res;
        }
    }

    return mini + 1;
}




int main()
{
    //number of egg is 2 and floor is 10.
    
    int e = 2, f = 10;
    

    cout << eggdrops(e, f) << endl;
    return 0;
}