#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test = 1;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int arr[100000];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n/2;i++)
		{
			swap(arr[i],arr[n-i-1]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}
}