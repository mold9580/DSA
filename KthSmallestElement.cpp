#include<bits/stdc++.h>
using namespace std;



//Result in TLE in solution submisssion



int main()
{
    int n;
    int mn=INT_MAX;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
    }
    int k;
    cin>>k;
    for(int times=1;times<k;times++)
    {
        int temp=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>mn && arr[i]<temp)
            {
                temp=arr[i];
            }
        }
        mn=temp;
    }
    cout<<mn<<endl;
}