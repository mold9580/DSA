#include<bits/stdc++.h>
using namespace std;

int gameOfXor(vector<int> & arr, int n)
{
    int xr=0;
    for(int i=0;i<n;i++)
    {
       if(((i+1)*(n-i))%2!=0) {xr^=arr[i];}
    }
    return xr;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e: v) cin>>e;
    cout<<gameOfXor(v,n)<<endl;
}