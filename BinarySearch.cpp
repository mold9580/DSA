#include<bits/stdc++.h>
using namespace std;
ostream & operator<<(ostream & cout,vector<int> &v)
{
    for(auto e:v)cout<<e<<" ";
    cout<<endl;
    return cout;
}
istream & operator>>(istream & cin, vector<int> &v)
{
    for(auto &e:v) cin>>e;
    return cin;
}
int BinarySearch(vector<int> & v, int key)
{
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==key) return mid;
        else if(v[mid]>key) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        cin>>v;
        cout<<v;
        int key;
        cin>>key;
        cout<<"key at index "<<BinarySearch(v,key);
        return 0;
    }
}