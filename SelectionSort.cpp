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
void SelectionSort(vector<int> &arr)
{
    for(int i=0;i<arr.size()-1;i++)
    {
        int idx=i;
        for(int j=i+1;j<arr.size();j++) if(arr[j]<arr[idx]) idx=j;
        swap(arr[i],arr[idx]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    cout<<v;
    cout<<"After Selection Sorting"<<endl;
    SelectionSort(v);
    cout<<v;
    return 0;
}