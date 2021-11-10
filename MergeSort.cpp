#include<bits/stdc++.h>
using namespace std;
ostream & operator<<(ostream & cout,vector<int> &v)
{
    for(auto e:v)cout<<e<<" ";
    cout<<endl;
    return cout;
}
istream & operator>>(istream & cin, vector<int> &v)
{
    for(auto &e:v) cin>>e;
    return cin;
}
void Merge(vector<int> &arr,int l, int r)
{
    int mid=l+(r-l)/2, a[r-l+1],i=l,j=mid+1,k=0;
    while(i<=mid and j<=r)
    {
        if(arr[i]<arr[j]) a[k++]=arr[i++];
        else a[k++]=arr[j++];
    }
    while(i<=mid) a[k++]=arr[i++];
    while(j<=r) a[k++]=arr[j++];
    for(i=l,k=0;i<=r;i++,k++) arr[i]=a[k];
}
void MergeSort(vector<int> &arr,int l,int r)
{
    if(l>=r) return;
    int mid=l+(r-l)/2;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    Merge(arr,l,r);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    cout<<v;
    cout<<"After Merge Sorting"<<endl;
    MergeSort(v,0,n-1);
    cout<<v;
    return 0;
}