#include<bits/stdc++.h>
#define int long long
using namespace std;
int * SolveUsingXor(int arr[],int n)
{
    int *arr1=new int[2];
    arr1[0]=0;
    arr1[1]=0;
    int xr=0;
    for(int i=0;i<n;i++)
    {
        xr=xr^arr[i]^(i+1);
    }
    int mask=xr&~(xr-1);
    for(int i=0;i<n;i++)
    {
        if(mask&arr[i]) arr1[1]^=arr[i];
        else arr1[0]^=arr[i];
        
        if((i+1)&mask) arr1[1]^=(i+1);
        else arr[0]^=(i+1);
    }
    if(!binary_search(arr,arr+n,arr1[0])) swap(arr1[0],arr1[1]);
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
    arr1=SolveUsingXor(arr,n);
    cout<<arr1[1]<<" "<<arr1[0]<<endl;
    return 0;
}