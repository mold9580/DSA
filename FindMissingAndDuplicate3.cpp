#include<bits/stdc++.h>
#define int long long
using namespace std;
int * ArrayUpdate(int arr[],int n)
{
    int *arr1=new int[2];
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]<0) arr1[0]=abs(arr[i]);
        else arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            arr1[1]=i+1;
            break;
        }
    }
    return arr1;
    
}
signed main()
{
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int *arr1=new int[2];
    arr1=ArrayUpdate(arr,n);
    cout<<arr1[1]<<" "<<arr1[0]<<endl;
    return 0;
}