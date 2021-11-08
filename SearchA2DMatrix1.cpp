#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int row=m.size();
        int col=m[0].size();
        int l=0,r=row*col-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int temp=m[mid/col][mid%col];
            if(temp==target) return true;
            else if(temp>target) r=mid-1;
            else l=mid+1;
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