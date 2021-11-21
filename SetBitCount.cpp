#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBits1(int n)
    {
        return __builtin_popcount(n);
    }
    int setBits(int n) 
    {
        int count=0;
        while(n)
        {
           n&=n-1;
           count++;
        }
        return count;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}