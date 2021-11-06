#include<bits/stdc++.h>
using namespace std;


//Results in TLE in solution submission in GFG practice



class Solution{
    public:
    int divide(int arr[],int l,int r)
    {
        int key=arr[r];
        int j=l-1;
        for(int i=l;i<=r-1;i++)
        {
            if(arr[i]<key) swap(arr[++j],arr[i]);
        }
        swap(arr[++j],arr[r]);
        return j;
    }
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //Using Quick Sort logic
        while(l<=r)
        {
            int partition=divide(arr,l,r);
            if(partition==k-1) return arr[partition];
            else if(partition>k-1) r=partition-1;
            else l=partition+1;
        }
        return -1;
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends