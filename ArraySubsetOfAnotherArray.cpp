#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    int arr[100005];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++) arr[a1[i]]++;
    
    for(int i=0;i<m;i++) 
    {
        if(arr[a2[i]]==0) return "No";
    }
    return "Yes";
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    cout<<isSubset(a,b,n,m)<<endl;
}