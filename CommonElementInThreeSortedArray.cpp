#include<bits/stdc++.h>
using namespace std;


vector <int> CommonElements (int a[], int b[], int c[], int n1, int n2, int n3)
    {
        map<int,int>mp,mp1,mp2;
        vector<int> v;
        for(int i=0;i<n1;i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            mp1[b[i]]++;
        }
        for(int i=0;i<n3;i++)
        {
            mp2[c[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(mp1.find(it->first)!=mp1.end() && mp2.find(it->first)!=mp2.end())
                v.push_back(it->first);
        }
        return v;
    }
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    for(int i=0;i<n3;i++) cin>>c[i];
    vector<int> v=CommonElements(a,b,c,n1,n2,n3);
    for(auto e: v ) cout<<e<<" ";
    return 0;
}