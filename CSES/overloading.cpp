#include<bits/stdc++.h>


// Suryakant Thakur

using namespace std;


#define ll              long long int
#define ld              long double
#define mod             1000000007
#define inf             1e18
#define endl            "\n"
#define pb              push_back
#define vi              vector<ll>
#define vs              vector<string>
#define pii             pair<ll,ll>
#define ump             unordered_map
#define mp              map
#define ps(x, y)        fixed<<setprecision(y)<<x
#define pq_max          priority_queue<ll>                                  // max heap
#define pq_min          priority_queue<ll,vi,greater<ll> >                  // min heap
#define fi              first
#define sec             second
#define mid(l,r)        (l+(r-l)/2)
#define floop(i,a,b)    for(int i = (a); i <= (b); i++)
#define rloop(i,a,b)    for(int i = (a); i >= (b); i--)


void file_i_o()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

//base class
//parent class
class Surya {
private:
	int data;

public:

	int sum(int n) {
		this->data = n;
		return data;
	}



};

//derived class
//child class

class Rumman: public Surya {
public:
	int chai;
};







// void sum(int a, int b) {

// 	int sum1 = a + b;

// 	cout << sum1 << endl;
// }

// m1// m2
// a = 56
// b = 34


void swapi(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;

	//cout << a << " " << b << endl;
}






void solve() {

	int a, b; cin >> a >> b;



	swapi(a, b);

	cout << a << " " << b << endl;

}


int main() {
	file_i_o();
	//solve();

	Rumman obj;
	//obj.sum(5);
	obj.chai = 20;

	cout << obj.sum(5) << " " << obj.chai << endl;


	return 0;
}
