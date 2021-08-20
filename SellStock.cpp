#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& v) 
{
    int cmn=v[0],ans=0;
    for(int i=1;i<v.size(); i++)
    {
        if((v[i]-cmn)>ans)
        {
            ans=v[i]-cmn;
        }
        else if(v[i]<cmn)
        {
            cmn=v[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &e:v) cin>>e;
    cout<<maxProfit(v)<<endl;
}