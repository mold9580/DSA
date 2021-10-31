// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	  int i=0,temp=0;
	  while(i<n)
	  {
	      if(arr1[i]<=arr2[0]) i++;
	      else
	      {
	          temp=arr1[n-1];
	          for(int k=n-1;k>i;k--) arr1[k]=arr1[k-1];
	          arr1[i]=arr2[0];
	          int j=1;
	          for(; arr2[j]<temp && j<m ;j++)
	          {
	              arr2[j-1]=arr2[j];
	          }
	          arr2[j-1]=temp;
	          i++;
	          
	      }
	  }
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends