#include <iostream>
using namespace std;

int main() {
	//cout<<"GfG!";
	string s;
	getline(cin, s);
	int count1 = 0, count2 = 0;
	for(int i = 0; i<s.length(); i++)
	{
	    if(s[i] == '{')
	        count1++;
	}
	
	for(int i = 0; i<s.length(); i++)
	{
	    if(s[i]=='}')
	        count2++;
	}
	
	if(count1 == count2)
	{
	    cout<<"correct";
	}
	else{
	    cout<<"error";
	}
	
	return 0;
}