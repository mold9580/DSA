// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    void arrange(int arr1[], int arr2[], int n, int m,int mid)
    {
        if(mid==n) return;
        int j=0;
        for(int i=mid;i<n;i++) swap(arr1[i],arr2[j++]);
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
    }
    
    void rotate(int a[], int n, int idx)
    {
        int i;
        for (i = 0; i < idx / 2; i++)
            swap(a[i], a[idx - 1 - i]);
        for (i = idx; i < (n + idx) / 2; i++)
            swap(a[i], a[n - 1 - (i - idx)]);
        for (i = 0; i < n / 2; i++)
            swap(a[i], a[n - 1 - i]);
    }
    
    
	void merge(int arr1[], int arr2[], int n, int m) {
        /*
        Like we did the partition in median of two sorted array of different array 
        we can divide both array in such a way that elements in the total left=n (instead of (n+m+1)/2)
        swap the upperright with lower left(assume that upper or first array is smaller)
        sort both the array
        */
	   if(n>m)//if first array is grater
	   {
           
	       merge(arr2,arr1,m,n); 
           //since in out we print the first array first then second
           //rotate the first array by n-m times
           //swap first m element with array2
	       rotate(arr1, n, n - m);
	       for (int i = 0; i < m; i++) swap(arr2[i], arr1[i]);
	       return;
	   }
	  int l=0,r=n;
	  while(l<=r)
	  {
	      int mid=(l+r)/2;
	      int alft,blft,art,brt;
	      int rest=n-mid;
	      alft=(mid==0)?INT_MIN:arr1[mid-1];
	      art=(mid==n)?INT_MAX:arr1[mid];
	      blft=(rest==0)?INT_MIN:arr2[rest-1];
	      brt=(rest==m)?INT_MAX:arr2[rest];
	      if(alft<=brt and blft<=art) {arrange(arr1,arr2,n,m,mid); return;}
	      else if(alft>brt) r=mid-1;
	      else l=mid+1;
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