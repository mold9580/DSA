// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long curr_big=arr[0];
        long long ans=0,curr_ans=0,upto=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<curr_big) curr_ans+=curr_big-arr[i];
            else
            {
                curr_big=arr[i];
                ans+=curr_ans;
                curr_ans=0;
                upto=i;
            }
            
        }
        curr_big=arr[n-1];
        for(int i=n-2;i>upto;i--)
        {
           if(arr[i]>curr_big) curr_big=arr[i];
           else ans+=curr_big-arr[i];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends