//Rectangular pattern with given center

#include<bits/stdc++.h>

//using namespace std;

int main(){

    int c1, c2, n;

    std::cin>>c1>>c2>>n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            std::cout<<(std::max(abs(c1-i), abs(c2-j)))<<" ";
        }
        std::cout<<"\n";
    }

    return 0;

}