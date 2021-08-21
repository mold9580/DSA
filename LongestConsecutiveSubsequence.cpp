#include<bits/stdc++.h>
using namespace std;


int findLongestConseqSubseq(int arr[], int n)
{
    int dp[100005];
    memset(dp,0,sizeof(dp));
    int ans=0,count=0;
    for(int i=0;i<n;i++)
    {
        dp[arr[i]]=1;
    }
    for(int i=0;i<100005;i++)
    {
        if(dp[i]==1)
        {
            count++;
            ans=max(count,ans);
        }
        else
        {
            count=0;
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