#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int median(vector<vector<int>> &arr, int r, int c){
        int mn=INT_MAX, mx=INT_MIN,ans=INT_MIN,desired=(r*c+1)>>1,mid,temp=0;
        for(int i=0;i<r;i++) mx=max(mx,arr[i][c-1]),mn=min(mn,arr[i][0]);//Find the min and max element in matrix
        //median will lie in between min and max
        //Assuption that no of desired element will be left side of min and min will be the median for this assumption
        //narrow down the search range for mn and mx and mn will be median after while loop terminates
        while(mn<mx)
        {
            temp=0;
            mid=mn+(mx-mn)/2;
            for(int i=0;i<r;i++)
            {
                temp+=upper_bound(arr[i].begin(),arr[i].end(),mid)-arr[i].begin();
            }
            if(temp<desired) mn=mid+1;//if element in the left of mn is less than desired then mid is not a potential condidate for median
            else mx=mid;//else mid may be a potential condidate for median
        }
        return mn;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}