#include<bits/stdc++.h>
using namespace std;


string xor1(string a, string b)
{
	
	string res = "";
	
	int n = b.length();

	for(int i = 1; i < n; i++)
	{
		if (a[i] == b[i])
			res += "0";
		else
			res += "1";
	}
	return res;
}


string mod2div(string dividend, string divisor)
{
	

	int pick = divisor.length();
	
	string tmp = dividend.substr(0, pick);
	
	int n = dividend.length();
	
	while (pick < n)
	{
		if (tmp[0] == '1')
		
			tmp = xor1(divisor, tmp) + dividend[pick];
		else
		
			tmp = xor1(string(pick, '0'), tmp) +
				dividend[pick];
				
	
		pick += 1;
	}
	
	if (tmp[0] == '1')
		tmp = xor1(divisor, tmp);
	else
		tmp = xor1(string(pick, '0'), tmp);
		
	return tmp;
}


void encodeData(string data, string key)
{
	int l_key = key.length();
	
	string appended_data = (data + string(l_key - 1, '0'));
	
	string remainder = mod2div(appended_data, key);

	string codeword = data + remainder;
	cout << "Remainder : "
		<< remainder << "\n";
	cout << "Encoded Data (Data + Remainder) :"
		<< codeword << "\n";
}


int main()
{
	string data = "100100";
	string key = "1101";
	
	encodeData(data, key);
	
	return 0;
}
