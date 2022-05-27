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


struct Node {
	int data;
	Node *next, *prev;

	Node(int x)
	{
		data = x;
		next = nullptr;
		prev = nullptr;
	}
};


void printNode(Node *head) {

	if (head == nullptr)
	{
		cout << "Nothing is in the Linkedlist";
	}

	Node* curr = head;

	int size = 0;

	while (curr != nullptr) {
		size++;
		// cout << curr->data << " ";
		curr = curr->next;
	}

	cout << size;
}


void reverseLL(Node *head)  // 10-->20-->30-->40
{
	if (head == nullptr)
	{
		cout << 0 << endl;
	}

	Node*curr = head;

	Node *prev = nullptr, *next = nullptr;

	while (curr != nullptr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	head = prev;

	//return prev;

	printNode(prev);
}







// void solve() {

// }


int main() {
	file_i_o();


	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);

	reverseLL(head);

	//solve();
	return 0;
}
