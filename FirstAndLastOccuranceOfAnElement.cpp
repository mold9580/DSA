#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int l=0,r=n-1,lidx=-1,ridx=-1;
    //For the first occurance
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x) lidx=mid,r=mid-1;//Keep searching in left part untill l>r
        else if(arr[mid]<x) l=mid+1;
        else r=mid-1;
    }
    //For the last occurance
    l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x) ridx=mid,l=mid+1;//Keep searching in right part untill l>r
        else if(arr[mid]<x) l=mid+1;
        else r=mid-1;
    }
    v.push_back(lidx);
    v.push_back(ridx);
    return v;
}