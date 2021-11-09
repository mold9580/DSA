#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    auto it=upper_bound(arr[0].begin(),arr[0].end(),0);
	    int ans=-1;
	    int idx=it-arr[0].begin();
	    if(idx!=m) ans=0;
	    if(idx==0) return 0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i][idx-1]!=0)
	        {
	            it=upper_bound(arr[i].begin(),arr[i].begin()+idx,0);
	            idx=it-arr[i].begin();
	            if(idx==0) return i;
	            else ans=i;
	        }
	    }
	    return ans;
	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}