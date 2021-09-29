#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) cin>>arr[i][j];
    }


    int sr=0,er=r-1,sc=0,ec=c-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++) cout<<arr[sr][i]<<" ";
        sr++;
        
        for(int i=sr;i<=er;i++) cout<<arr[i][ec]<<" ";
        ec--;
        
        if(sr<er)
        {
            for(int i=ec;i>=sc;i--) cout<<arr[er][i]<<" ";
            er--;
        }
        
        if(sc<ec)
        {
            for(int i=er;i>=sr;i--) cout<<arr[i][sc]<<" ";
            sc++;
        }
    }
}