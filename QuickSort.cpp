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
int partition(vector<int> &arr, int l, int r)
{
    int pivot=arr[r],j=l-1;
    for(int i=l;i<r;i++) if(arr[i]<pivot) swap(arr[++j],arr[i]);
    swap(arr[++j],arr[r]);
    return j;
}
void QuickSort(vector<int> &arr,int l,int r)
{
    if(l>=r) return;

    int sortedpivot=partition(arr,l,r);
    QuickSort(arr,l,sortedpivot-1);
    QuickSort(arr,sortedpivot+1,r);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    cout<<v;
    cout<<"After Quick Sorting"<<endl;
    QuickSort(v,0,n-1);
    cout<<v;
    return 0;
}