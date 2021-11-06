#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    int minSwap(int arr[], int n, int k) 
    {
        int count=0,temp=0;
        for(int i=0;i<n;i++) if(arr[i]<=k) count++;//count the effect size of cluster smaller than or equal to k
        for(int i=0;i<count;i++) if(arr[i]<=k) temp++; // Take a count size sliding window and count number of elements which are able 
                                                       // to be in cluster
        int ans=count-temp;
        if(ans==0) return 0;
        //Slide the count size window and check for the minimun number of element missing in cluster
        for(int i=count,j=0;i<n;i++,j++)
        {
            if(arr[i]<=k) temp++;
            if(arr[j]<=k) temp--;
            ans=min(ans,count-temp);
        }
        return ans;
    }
};



int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}