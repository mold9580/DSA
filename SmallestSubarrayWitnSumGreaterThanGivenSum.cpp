#include<bits/stdc++.h>
#define int long long
using namespace std;

// if we are using if-else condition in while loop then to avoid errors on corner case we will have to use pre increment and not
// post increment ,this may cause invalid memory accessions

// if we use while loop in while loop this resolves both , the corner case as well as the index out of range accession.

int sb(vector<int> &arr, int n, int x)
{
    int count=0,sum=0,ans=n+1,i=-1,j=-1;
    while(i<n && j<n && i<=j)
    {
        if(sum<=x)
        {
            cout<<arr[j+1]<<endl;
            sum+=arr[++j];
            //cout<<"sum"<<sum<<endl;
        }
        else
        {
            //cout<<j<<"  "<<i<<endl;
            ans=min(ans,(j-i));
            sum-=arr[++i];
            //cout<<" asnkas"<<sum<<endl;
        }
    }
    return ans;
}



int sb1(int arr[], int n, int x)
{
    int count=0,sum=0,ans=n+1,i=0,j=0;
    while(j<n)
    {
        while(sum<=x && j<n)
        {
            sum+=arr[j++];
            //cout<<"sum"<<sum<<endl;
        }
        while(sum>x)
        {
            //cout<<j<<"  "<<i<<endl;
            ans=min(ans,(j-i));
            sum-=arr[i++];
            //cout<<" asnkas"<<sum<<endl;
        }
    }
    return ans;
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
    int n,sum;
    cin>>n>>sum;
    vector<int> v(n);
    cin>>v;
    cout<<sb(v,n,sum)<<endl;
}