#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m)
    {
        sort(arr.begin(),arr.end());
		//take a m size window in sorted array and slide it to the end to find the minimum difference for the corner elements of window
        long long ans=INT_MAX;
        for(int i=m-1;i<n;i++) ans=min(ans,(arr[i]-arr[i-m+1]));
        return ans;
    }   
};

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}