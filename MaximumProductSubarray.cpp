// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=INT_MIN,curr_ans=1;
	    int i=0,j=0;
	    while(i<n)
	    {
	        if(arr[i]!=0)
	        {
	            curr_ans*=arr[i++];
	            ans=max(ans,curr_ans);
	        }
	        else
	        {
	            ans=max(ans,curr_ans);
	            while(j<i-1)
	            {
	                curr_ans/=arr[j++];
	                ans=max(ans,curr_ans);
	            }
	            curr_ans=1;
	            i++;
	            j=i;
	        }
	    }
	    while(j<i-1)
        {
            curr_ans/=arr[j++];
            ans=max(ans,curr_ans);
        }

	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends