#include<bits/stdc++.h>

bool armstr(int num){

    int temp = num;

    int arm = 0;

    while(temp != 0)
    {
        int rem = temp%10;
        arm += rem*rem*rem;
        temp = temp/10;
    }

    if(arm == num)
        return true;
    return false;
}

int main(){

    int n; 
    std::cin >> n;

    if(armstr(n))
    {
        std::cout<<"Yes, it is the armstrong number";
    }
    else{
        std::cout<<"No, it is not the armstrong number";
    }

    return 0;


}