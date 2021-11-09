#include<bits/stdc++.h>
using namespace std;
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    unordered_map<int,int>mp;
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<m;i++) mp[mat[0][i]]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mp.find(mat[i][j])!=mp.end())
                if(mp[mat[i][j]]==i) mp[mat[i][j]]=i+1;//It takes care of multiple instances of an element in a row
        }
    }
    vector<int> v;
    for(auto it=mp.begin();it!=mp.end();it++)
        if(it->second==n) v.push_back(it->first);
    return v;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        auto ans = findCommonElements(arr);
        for(auto e:ans) cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}
