#include<iostream>
using namespace std;
void leftrotatebyone(int arr[],int n)
{
	int temp=arr[0], i;
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}
void leftrotate(int arr[], int d, int n)
{
	int i;
	for(i=0;i<d;i++)
	{
		leftrotatebyone(arr,n);
	}
}
void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n; cin>>n;
	int arr[n];

	for(int i = 0; i < n; i++)
		cin>>arr[i];

	int k; cin>>k; 
	leftrotate(arr,k,n);
	printarray(arr,n);
}