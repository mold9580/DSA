#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) 
    {
        vector<int>v;
        int xr=0,temp,mask;
        for(auto e:arr) xr=xr^e;
        temp=xr;
        mask=1;
        while(!(temp&1)) 
        {
            mask<<=1;
            temp>>=1;
        }
        int x=0,y=0;
        for(auto e:arr)
        {
            if(mask&e) x^=e;
            else y^=e;
        }
        if(x<y)
        {
            v.push_back(x);
            v.push_back(y);
        }
        else
        {
            v.push_back(y);
            v.push_back(x);
        }
        return v;
    }
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}