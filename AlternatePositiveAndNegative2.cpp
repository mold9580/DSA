// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

    void rotate(int arr[],int ox,int i)
    {
        int temp=arr[i];
        for(int j=i;j>ox;j--) arr[j]=arr[j-1];
        arr[ox]=temp;
    }

	void rearrange(int arr[], int n) {
	    int ox=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(ox>-1)
	        {
	            if(((arr[i]>=0) && (arr[ox]<0)) || ((arr[i]<0) && (arr[ox]>=0)))
	            {
	                rotate(arr,ox,i);
    	            if((i-ox)>=2) ox+=2;
    	            else ox=-1;
	            }
	        }
	        if(ox==-1)
	        {
	            if((arr[i]>=0 && (i&1)) || (arr[i]<0 && !(i&1))) ox=i;
	        }
	    }
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