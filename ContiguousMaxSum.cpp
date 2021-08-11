#include<bits/stdc++.h>
#define int long long
using namespace std;
int MaxSum(vector<int> &v)
{
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<v.size();i++)
    {
        currsum+=v[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0)
        {
            currsum=0;
        }
    }
    return maxsum;
}
signed main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<MaxSum(v);
    return 0;
}