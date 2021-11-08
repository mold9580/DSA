#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int r=m.size();
        int c=m[0].size();
        int i=0,j=c-1;
        while(j>=0 and i<=r-1)
        {
            if(m[i][j]==target) return true;
            else if(m[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,target;
        cin>>r>>c>>target;
        vector< vector<int> > v;
        for(auto e:v) 
        {
            e.resize(c);
            for(auto &ee:e) cin>>ee;
        }
        Solution obj;
        obj.searchMatrix(v,target);
    }
}