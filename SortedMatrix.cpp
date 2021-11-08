#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> m)
    {
        //Create an auxaliry array of n*n size, copy all elements of matrix to array, sort the array, Copy all the element back to matrix
        vector<int> v;
        for(auto vec:m)
            for(auto e:vec) v.push_back(e);
        sort(v.begin(),v.end());
        int k=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++) m[i][j]=v[k++];
        return m;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}