// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    priority_queue<int> mx;
    priority_queue<int,vector<int>, greater<int> > mn;
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        int n=mx.size();
        int m=mn.size();
        if(m==0 and n==0) mx.push(x);
        else if(n==m)
        {
            if(x<=mn.top()) mx.push(x);
            else
            {
                int temp=mn.top();
                mn.pop();
                mn.push(x);
                mx.push(temp);
            }
        }
        else
        {
            if(x>=mx.top()) mn.push(x);
            else
            {
                int temp=mx.top();
                mx.pop();
                mx.push(x);
                mn.push(temp);
            }
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        //We don't need to implement it as we are using STL priority which itself heapifies when pushed or poped
    }
    
    //Function to return Median.
    double getMedian()
    {
        int n=mx.size();
        int m=mn.size();
        if(n==m) return (mn.top()+mx.top())/2.0;
        return mx.top();
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends