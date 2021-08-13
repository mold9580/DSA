#include<bits/stdc++.h>
#define int long long
using namespace std;
int * Fun(int arr[],int n)
{
    int *arr1=new int[2];
    int a,b;
    a=b=0;
    for(int i=0;i<n;i++)
    {
        a+=arr[i];
        b+=pow(arr[i],2);
    }
    a-=((n*(n+1))/2);
    b-=((n*(n+1)*(2*n+1))/6);
    b/=a;
    arr1[1]=(a+b)/2;
    arr1[0]=b-arr1[1];
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
    arr1=Fun(arr,n);
    cout<<arr1[1]<<" "<<arr1[0]<<endl;
    return 0;
}