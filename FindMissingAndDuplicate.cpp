#include<bits/stdc++.h>
using namespace std;
#define int long long
int* FindMissingAndDuplicate(int arr[],int n)
{
    sort(arr,arr+n);
    int *arr1=new int[2];
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=(i+1) && arr[i-1]!=(i+1)) arr1[1]=(i+1);
        if(arr[i]==arr[i-1]) arr1[0]=arr[i];
    }
    return arr1;
}
signed main()
{
    freopen("Input.txt","r",stdin);
    freopen("Output.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int * arr1=FindMissingAndDuplicate(arr,n);
    cout<<arr1[1]<<" "<<arr1[0]<<endl;
}