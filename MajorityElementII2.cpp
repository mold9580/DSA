#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> majorityElement(vector<int>& v)
{
    vector<int> v1;
    int num1=-1,num2=-1,count1=0,count2=0,n=v.size(),k=n/3;
    for(auto e :v)
    {
        if(num1==e) count1++;
        else if(num2==e) count2++;
        else if(count1==0)
        {
            num1=e;
            count1++;
        }
        else if(count2==0)
        {
            num2=e;
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==num1) count1++;
        else if(v[i]==num2) count2++;
    }
    if(count1>k) v1.push_back(num1);
    if(count2>k) v1.push_back(num2);
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