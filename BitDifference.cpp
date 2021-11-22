#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countBitsFlip(int a, int b)
    {
        return __builtin_popcount(a^b);
    }
};
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}