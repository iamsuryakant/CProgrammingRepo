#include<bits/stdc++.h>

using namespace std;

class Student{

    public:

        int sum(int x, int y){
            return x+y;

        }

        int sum(int x, int y, int z){
            return x+y+z;

        }

        // void display(){
        //     cout<<
        // }


};

int main(){

    Student s1;

    cout<<s1.sum(3,4)<<" "<<s1.sum(3,5,7)<<endl;


}