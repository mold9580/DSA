#include<bits/stdc++.h>
using namespace std;


bool find3Numbers(int arr[], int n, int sum)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int l=i+1,r=n-1;
        while(l<r)
        {
            if((arr[i]+arr[l]+arr[r])==sum) return true;
            else if((arr[i]+arr[l]+arr[r])<sum) l++;
            else r--;
        }
    }
    return false;
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<find3Numbers(arr,n,sum)<<endl;
}