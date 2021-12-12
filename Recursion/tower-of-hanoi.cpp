#include<bits/stdc++.h>

using namespace std;

void tower(int n, char source, char aux, char des)
{
    if(n == 1)
    {
        cout<<"Move disk 1 from "<<source<<" to "<<des<<endl;
        return;
    }
    else{
        tower(n-1, source, des, aux);
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<des<<endl;
        tower(n-1, aux, source, des);
    }
}


int main(){
    int n; cin>>n;

    tower(n, 'A', 'B', 'C');

    return 0;
}