#include<bits/stdc++.h>
using namespace std;
pair<int, int> MinAndMax(int arr[],int n)
{
    pair<int, int>p;
    p.first=INT_MAX;
    p.second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(p.first>arr[i])
        {
            p.first=arr[i];
        }
         if(p.second<arr[i])
        {
            p.second=arr[i];
        }
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    pair<int,int> p;
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    p=MinAndMax(arr,n);
    cout<<p.first<<" "<<p.second<<endl;
}