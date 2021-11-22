#include<bits/stdc++.h>
using namespace std; 
bool findPair1(int arr[], int n, int k){
    sort(arr,arr+n);
    int i=0,j=1;
    while(i<n and j<n)
    {
        if(arr[i]-arr[j]==k || arr[j]-arr[i]==k) return true;
        else if(arr[j]-arr[i]<k) j++;
        else i++;
    }
    return false;
}
bool findPair(int arr[], int n, int k){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if((binary_search(arr+i+1,arr+n,k+arr[i])) || (binary_search(arr+i+1,arr+n,arr[i]-k))) return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
