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
void InsertionSort(vector<int> &arr)
{
    for(int i=1;i<arr.size();i++)
    {
        int j=i-1,temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    cin>>v;
    cout<<v;
    cout<<"After Insertion Sorting"<<endl;
    InsertionSort(v);
    cout<<v;
    return 0;
}