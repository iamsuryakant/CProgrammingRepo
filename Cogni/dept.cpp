#include<bits/stdc++.h>

using namespace std;

int main(){

    int cse, ece, mech;

    cout<<"Enter the no of students placed in CSE:";
    cin>>cse;
    cout<<"Enter the no of students placed in ECE:";
    cin>>ece;
    cout<<"Enter the no of students placed in MECH:";
    cin>>mech;

    if(cse < 0 || ece < 0 || mech < 0)
    {
        cout<<"Input is Invalid";
        //break;
    }
    else{

        if (cse == ece && ece == mech && mech == cse)
        {
            cout<<"None of the department has got the highest placement";
        }
        

        else if(cse > ece && cse > mech)
        {
            cout<<"Highest placement"<<endl;
            cout<<"CSE";
        }
        else if(ece > mech && ece > cse) 
        {
            cout<<"Highest placement"<<endl;
            cout<<"ECE";
        }
        else if(mech > cse && mech > ece){
            cout<<"Highest placement"<<endl;
            cout<<"MECH";
        }

        else if(cse == ece && cse > mech)
        {
            cout<<"Highest placement"<<endl;
            cout<<"CSE"<<endl;
            cout<<"ECE"<<endl;

        }

        else if(ece == mech && ece > cse)
        {
            cout<<"Highest placement"<<endl;
            cout<<"ECE"<<endl;
            cout<<"MECH"<<endl;
        }

        else if(mech == cse && cse > ece)
        {
            cout<<"Highest placement"<<endl;
            cout<<"MECH"<<endl;
            cout<<"CSE"<<endl;
        }
    }
    
    return 0;

}