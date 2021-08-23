#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> majorityElement(vector<int>& v) 
{
    int count=0;
    vector<int>v1;
    int n=v.size();
    int k=n/3;
    sort(v.begin(),v.end());
    for(int i=0;i<n;)
    {
        int curr=v[i];
        count=0;
        while(i<n && v[i]==curr)
        {
            count++;
            i++;
        }
        if(count>k) v1.push_back(curr);
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