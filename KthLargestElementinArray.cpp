#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        /*
        Alternatively we can use max heap in the same way but it will take O(n+klogn) time in building the heap and poppint aut k element
        We can also use min heap in O(n+(n-k)logn) for the same


        But the below solution is efficient than both of the above approach 
        It works in O(nlogk) because we never let the heap have element grater than k and for this we have to take min-heap for largest
        and max-heap for smallest.
        */
        priority_queue<int, vector<int>, greater<int> >m;
        for(auto e:nums)
        {
            if(m.size()<k) m.push(e);
            else
            {
                if(e>m.top())
                {
                    m.pop();
                    m.push(e);
                }
            }
        }
        return m.top();
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &e:v) cin>>e;
        Solution obj;
        obj.findKthLargest(v,k);
    }
}