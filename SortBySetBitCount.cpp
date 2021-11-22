#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
     static bool compare(int a, int b)
    {
        return __builtin_popcount(a)>__builtin_popcount(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        //Sort in STL is not stable while "stable_sort" in STL is stable;
        //Make a comparator accordingly, Here comparision based on no of set bits and stable sort if same no of set bits
        stable_sort(arr,arr+n,compare);
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
