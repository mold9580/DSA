#include<bits/stdc++.h>
#define int long long
using namespace std;



vector<vector<int> > merge(vector<vector<int> >& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int> > res;
    res.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=res.back()[1])
        {
            res.back()[1]=max(intervals[i][1],res.back()[1]);
        }
        else
        {
            res.push_back(intervals[i]);
        }
    }
    return res;
}





istream & operator>>(istream & cin,vector<vector<int > > &v)
{
    for(int i=0;i<v.size();i++)
    {
        int temp;
        cin>>temp;
        v[i].push_back(temp);
        cin>>temp;
        v[i].push_back(temp);
    }
    return cin;
}
ostream & operator<<(ostream & cout ,vector<vector<int> > &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i][0]<<"   "<<v[i][1]<<endl;
    }
    return cout;
}
signed main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<vector<int > > v(n);
    cin>>v;
    cout<<"Given Intervals"<<endl;
    cout<<v;
    vector<vector<int> > res=merge(v);
    cout<<"After Merging"<<endl<<res;
}
