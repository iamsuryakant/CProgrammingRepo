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

// class Vehicle {
// public:
// 	Vehicle() {
// 		cout << "Vehicle is running" << endl;
// 	}
// };

// class car: public Vehicle {
// public:
// 	car() {
// 		cout << "Car is running" << endl;
// 	}
// };


// Method Overlloading

// class Add {
// public:
// 	int add(int a, int b) {
// 		cout << a + b << endl;
// 	}

// 	int add(int a, int b, int c) {
// 		cout << a + b + c << endl;
// 	}
// };


// Method Overriding

class Base {
public:
	virtual void show() {
		cout << "This is Base class" << endl;
	}
};

class Derived: public Base {
public:
	void show() {
		cout << "This is derived class" << endl;
	}
};


int main() {
	file_i_o();

//    solve();

	Derived d;

	d.show();

	// ad.Add(5, 6);
	// ad.Add(5, 6, 5);

	// obj.run();
	return 0;
}
