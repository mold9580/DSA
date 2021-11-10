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
void BubbleSort(vector<int> &arr)
{
    for(int times=1;times<arr.size();times++)
    {
        for(int i=0;i<arr.size()-times;i++) if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    cout<<v;
    cout<<"After Bubble Sorting"<<endl;
    BubbleSort(v);
    cout<<v;
    return 0;
}