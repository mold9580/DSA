#include<bits/stdc++.h>
#define int long long
using namespace std;
void nextPermutation(vector<int>& arr) {
    int i=arr.size()-1;
    if(i<=0) return;
    while(i>0 && arr[i]<=arr[i-1])
    {
        i--;
    }
    if(i==0)
    {
        int n=arr.size();
        for(int i=0;i<n/2;i++)
        {
            swap(arr[i],arr[n-i-1]);
        }
        return;
    }
    else
    {
        int idx=i,j=i+1;
        while(j<arr.size())
        {
            if(arr[j]>arr[i-1])  idx=j;
            j++;
        }
        swap(arr[i-1],arr[idx]);
        int n=arr.size()-1;
        while(i<n)
        {
            swap(arr[i++],arr[n--]);
        }
    }
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
    vector<int> v(n);
    cin>>v;
    cout<<"NextPermutation is:  ";
    nextPermutation(v);
    cout<<v;
    return 0;
}