// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        // To merge two sorted arraya, in worst case, we can perform maximum log(n+m) swapping to bring the last element at position arr1[0] 
        // in First pass calculate ceil value of gap=ceil((n+m)/2)
        // in next passes gap=ceil(gap/2)
        // for every gap iterate through both arrays and check whether swapping is required to bring the smaller element in left side
        // To overcome the loop trapping situation rearrange for gap=1
        void rearrange(long long arr1[], long long arr2[], int n, int m,int gap)
        {
            int i=0,j=i+gap;
            while(j<(n+m))
            {
                if(j<n)
                {
                    if(arr1[j]<arr1[i]) swap(arr1[i],arr1[j]);
                    i++,j++;
                }
                else if (i<n && j>=n)
                {
                    if(arr2[j-n] < arr1[i]) swap(arr2[j-n], arr1[i]);
                    i++,j++;
                }
                else
                {
                    if(arr2[j-n]<arr2[i-n]) swap(arr2[i-n],arr2[j-n]);
                    i++,j++;
                }
            }
        }
        
        
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int gap=(n+m+1)/2;
            while(gap>1)
            {
                rearrange(arr1,arr2,n,m,gap);
                gap=(gap+1)/2;
            }
            rearrange(arr1,arr2,n,m,1);
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends