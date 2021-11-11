#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int search(int arr[], int l, int h, int key)
    {
        while(l<=h)
        {
            //If plotting on graph it will make Z like curve and mid may lie on before the break pont or after the break point
            //There will be two cases associated with both possibility of mid point
            int mid=l+(h-l)/2;
            if(arr[mid]==key) return mid;
            //When left part of mid point is sorted
            else if(arr[l]<=arr[mid])
            {
                //when key lies in between the sorted part
                if(key>=arr[l] and key<arr[mid]) h=mid-1;
                //Key lies in unsorted part
                else l=mid+1;
            }
            //When Right part of mid point is sorted
            else
            {
                //when key may lie in between the sorted part
                if(key>arr[mid] and key<=arr[h]) l=mid+1;
                //Key may lie in unsorted part
                else h=mid-1;
            }
        }
        return -1;
    }
}; 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}