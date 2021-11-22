#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //__builtin_popcount() does not work for long long.
    int __builtin_popcount_(long long n)
    {
        int count=0;
        while(n)
        {
            n&=n-1;
            count++;
        }
        return count;
    }
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        return __builtin_popcount_(n)==1?true:false;    
        
    }
};
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}