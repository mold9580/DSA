#include<bits/stdc++.h>
using namespace std;


bool find3Numbers(int arr[], int n, int sum)
{
    int temp,a,b;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a=arr[i],b=arr[j];
            temp=sum-a-b;
            if(m.find(temp)!=m.end())
            {
                if(temp!=a && temp!=b) return true;
                else if(temp==a && temp==b)
                {
                    if(m[a]>2) return true;
                }
                else if(temp==a)
                {
                    if(m[a]>1) return true;
                }
                else if(temp==b)
                {
                    if(m[b]>1) return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<find3Numbers(arr,n,sum)<<endl;
}