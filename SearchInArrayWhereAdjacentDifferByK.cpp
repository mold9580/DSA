#include<bits/stdc++.h>
using namespace std;

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k);
int main()
{
	int t,n,k,x;
	cin>>t;
	while(t--)
    {

        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        cout<<search(arr, n, x, k)<<endl;

    }
return 0;
}

// } Driver Code Ends


// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    for(int i=0;i<n;)
    {
        if(arr[i]==x) return i;
        int temp=abs(x-arr[i]);
        i+=(temp/k==0)?1:temp/k;//For an Efficient searching take the steps which may jump though non essential area, i.e. crosses the area 
        //where element can't be found
    }
    return -1;
}    	