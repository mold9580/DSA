#include<bits/stdc++.h>
#define int long long
using namespace std;
void SwapSort(vector<int> &arr,int n)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]!=arr[arr[i]-1]) swap(arr[i],arr[arr[i]-1]);
        else i++;
    }
}
ostream & operator<<(ostream &cout,vector<int> &v)
{
    for(int i=0;i<v.size();i++) cout<<v[i]<<"  ";
    cout<<endl;
    return cout;
}
signed main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) {int temp; cin>>temp; arr.push_back(temp);}
    SwapSort(arr,n);
    cout<<arr<<endl;
    return 0;
}