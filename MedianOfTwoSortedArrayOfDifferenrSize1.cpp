#include<bits/stdc++.h>
using namespace std;
 /*
    Since the both array are sorted we can exploit the property of binary search in sorted array
    Divide the both array in such a way that hypothetically left part of both array construct the left array of solution
    and right part of both array construct the right array of solution
*/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size();
        int total=(n+m+1)/2;// Take care of odd or even sum of whole
        if(n>m) return findMedianSortedArrays(b,a); //  make sure that vector a is always smaller
        // if smaller array is empty (Will result in runtime error if both array are empty)
        if(n==0) return (m&1)?b[m/2]:(b[m/2]+b[m/2-1])/2.0;
        /*
        Unlike binary search we can't make l=r-1 because here we have assumed that at mid=i index i will be in right partition
        But there is a condition when all the elements of the first array are in left partition and for this condition mid=n should
        be satisfied. But taking r=n-1 we can never make this satisfied so we have taken kare of that corner case by taking r=n
        */
        int l=0,r=n; 
        int alt,blt,art,brt;
        while(l<=r)
        {
            int amid=(l+r)/2;
            int bmid=total-amid;
            alt=(amid==0)?INT_MIN:a[amid-1];
            art=(amid==n)?INT_MAX:a[amid];
            blt=(bmid==0)?INT_MIN:b[bmid-1];
            brt=(bmid==m)?INT_MAX:b[bmid];
            if(alt<=brt && blt<=art) return ((n+m)&1) ? max(alt,blt):(max(alt,blt)+min(art,brt))/2.0;
            else if(alt>brt) r=amid-1;
            else l=amid+1;
        }
        return -1.0;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;
    Solution obj;
    cout<<obj.findMedianSortedArrays(a,b)<<endl;
}