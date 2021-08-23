#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> majorityElement(vector<int>& v) 
{
    unordered_map<int,int>m;
    vector<int>v1;
    int k=v.size()/3;
    for(auto e : v) m[e]++;
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second > k) v1.push_back(it->first);
    }
    return v1;
}

istream & operator>>(istream & cin, vector<int> &v)
{
    for(int i=0;i<v.size();i++) cin>>v[i];
    return cin;
}
ostream & operator<<(ostream & cout, vector<int> &v)
{
    for(int i=0;i<v.size();i++) cout<<v[i]<<"  ";
    return cout;
}
signed main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> v(n),v1;
    cin>>v;
    v1=majorityElement(v);
    cout<<v1<<endl;
}