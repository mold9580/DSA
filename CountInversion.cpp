#include<bits/stdc++.h>
using namespace std;
void CountInversion(long long arr[],long long s,long long e,long long &count)
{
    long long mid=(s+e)/2;
    long long a[50];
    long long int i=s,j=mid+1,k=0;
    while(i<=mid && j<=e)
    {
        if(arr[i]<=arr[j]) a[k++]=arr[i++];
        else
        {
            a[k++]=arr[j++];
            count+=mid-i+1;
            
        }
    }
    while(i<=mid)
    {
        a[k++]=arr[i++];
    }
    while(j<=e) {a[k++]=arr[j++];}
    for(long long i=s,k=0;i<=e;) arr[i++]=a[k++];
}
void partition(long long arr[],long long s,long long e,long long &count)
{
    if(s>=e) return;
    else 
    {
        long long mid=(s+e)/2;
        partition(arr,s,mid,count);
        partition(arr,mid+1,e,count);
        CountInversion(arr,s,e,count);
    }
}
long long int inversionCount(long long arr[], long long n)
{
   long long int s=0,e=n-1,count=0;
   partition(arr,s,e,count);
   //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    
    return count;
}





int main()
{
    long long arr[]={3,1,4,5,61,2,3,4};
    long long n=sizeof(arr)/sizeof(long long);
    cout<<inversionCount(arr,n)<<endl;
    return 0;

}