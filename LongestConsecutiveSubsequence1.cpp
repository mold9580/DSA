#include<bits/stdc++.h>
using namespace std;


int findLongestConseqSubseq(int arr[], int n)
{
    int ans=1,count=1;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            count++;
            ans=max(ans,count);
        }
        else if(arr[i]==arr[i-1])
        {

        }
        else
        {
            count=1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<findLongestConseqSubseq(arr,n)<<endl;
}