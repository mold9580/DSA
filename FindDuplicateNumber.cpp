#include<bits/stdc++.h>
#define int long long
using namespace std;
int FindDuplicate(int arr[], int n)
{
    for(signed i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]<0)
        {
            return abs(arr[i]);
        }
        else
        {
            arr[arr[i]-1]=-arr[arr[i]-1];
        }
    }
    return -1;
}
signed main()
{
    int arr[] = {1,2,3,4,3,5,6,7,9};
    cout<<FindDuplicate(arr,sizeof(arr)/sizeof(int))<<endl;
}
