#include<bits/stdc++.h>
using namespace std;
int Intersection(int a[],int b[],int n,int m)
{
    sort(a,a+n);
    sort(b,b+m);
    int counter=0;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j] && a[i-1]!=a[i])
        {
            counter++;
            i++;
            j++;
        }
        else if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return counter;
}
int Union(int a[],int b[],int n,int m)
{
    sort(a,a+n);
    sort(b,b+m);
    vector<int> v;
    int i=0,j=0;
    while(1)
    {
        if(i<n && j<m)
        {
            if(a[i]>b[j])
            {
                v.push_back(b[j]);
                j++;
            }
            else if(a[i]==b[j])
            {
                v.push_back(b[j]);
                i++;
                j++;
            }
            else
            {
                v.push_back(a[i]);
                i++;
            }
        }
        else if(i<n)
        {
            v.push_back(a[i]);
            i++;
        }
        else if(j<m)
        {
            v.push_back(b[j]);
            j++;
        }
        else
        {
            break;
        }
        
    }


    /*
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl; */



    int counter=1;
    j=0;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]!=v[j])
        {
            //cout<<v[i]<<" and "<<v[j]<<endl;
            counter++;
            j++;
        }
        else
        {
            while(v[i]==v[j] && i<v.size())
            {
                i++;
                j++;
            }
            if(i==v.size())
            {
                break;
            }
            j++;
            counter++;
        }
    }
        return counter;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m;i++)
    {
        cin>>b[i];
    }
    cout<<Union(a,b,n,m)<<endl;
    cout<<Intersection(a,b,n,m)<<endl;
}