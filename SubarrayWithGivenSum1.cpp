#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
    if(n==1)
    {
        if(arr[0]==sum) return 1;
        else return 0;
    }
    int res=0;
    unordered_map<int,int>m;
    m[arr[0]]++; // gives wrong answer if m[arr[0]]=1;
    m[0]++; //gives wrong answer if m[0]=1
    int arr1[n];
    arr1[0]=arr[0];
    if(arr[0]==sum) res++;
    for(int i=1;i<n;i++)
    {
        arr1[i]=arr[i]+arr1[i-1];
        if(m.find(arr1[i]-sum)!=m.end()) 
        {
            res+=m[arr1[i]-sum]; 
        }
        m[arr1[i]]++;
    }
    return res;
}


int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<subArraySum(arr,n,sum)<<endl;
}