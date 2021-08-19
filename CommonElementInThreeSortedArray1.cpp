#include<bits/stdc++.h>
using namespace std;


vector <int> CommonElements (int a[], int b[], int c[], int n1, int n2, int n3)
    {
        vector<int> v;
        int i=0,j=0,k=0;
        while(i<n1 && j<n2 && k<n3)
        {
            if(a[i]==b[j]==c[k])
            {
                if(v.empty()) v.push_back(a[i]);
                else
                {
                    if(v.back()!=a[i]) v.push_back(a[i]);
                }
                i++,j++,k++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[k]) j++;
            else k++;
        }
        return v;
    }
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1],b[n2],c[n3];
    for(int i=0;i<n1;i++) cin>>a[i];
    for(int i=0;i<n2;i++) cin>>b[i];
    for(int i=0;i<n3;i++) cin>>c[i];
    vector<int> v=CommonElements(a,b,c,n1,n2,n3);
    for(auto e: v ) cout<<e<<" ";
    return 0;
}