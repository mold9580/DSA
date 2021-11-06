#include<bits/stdc++.h>
using namespace std;

 
//Accepted Solution at GFG just by adding random partition in quicksort partitioning logic
//Not a reliable solution as rand() can perform differently every time when exexuted


class Solution{
    public:
    
    int randomPartition(int arr[], int l, int r) 
    { 
        int n = r-l+1; 
        int pivot = rand() % n; 
        swap(arr[l + pivot], arr[r]); 
        return partition(arr, l, r); 
    }
    
    
    int partition(int arr[],int l,int r)
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
        if (k > 0 && k <= r - l + 1) {
        // Partition the array around last element and get
        // position of pivot element in sorted array
        int pos = randomPartition(arr, l, r);
 
        // If position is same as k
        if (pos - l == k - 1)
            return arr[pos];
        if (pos - l > k - 1) // If position is more, recur for left subarray
            return kthSmallest(arr, l, pos - 1, k);
 
        // Else recur for right subarray
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
 
    // If k is more than number of elements in array
    return INT_MAX;
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