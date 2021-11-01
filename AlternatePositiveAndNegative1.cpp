#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>p,ne;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0) p.push_back(arr[i]);
	        else ne.push_back(arr[i]);
	    }
	    int pi=0,ni=0,i=0;
	    while(pi<p.size() && ni<ne.size())
	    {
	        if(i&1) arr[i++]=ne[ni++];
	        else arr[i++]=p[pi++];
	    }
	    while(pi<p.size()) arr[i++]=p[pi++];
	    while(ni<ne.size()) arr[i++]=ne[ni++];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends