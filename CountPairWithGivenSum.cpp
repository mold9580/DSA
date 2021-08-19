#include<bits/stdc++.h>
using namespace std;

int getPairsCount(vector<int> &arr, int n, int k)
{
    unordered_map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(k-arr[i])!=mp.end())
        {
            ans+=mp[k-arr[i]];
        }
        mp[arr[i]]++;
        
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    cout<<getPairsCount(v,n,k)<<endl;
}