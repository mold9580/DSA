#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public:
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int j=0;j<n;j++)
        {
            //reverse all the columns 
            for(int i=0;i<n/2;i++) swap(matrix[i][j],matrix[n-1-i][j]);
        }
        for(int i=0;i<n;i++)
        {
            //take the transpose of reverse matrix
            for(int j=0;j<i;j++) swap(matrix[i][j],matrix[j][i]);
        }
        //An alternative way is to rotate n/2 squares 90 Degree clockwise
        //an square in matrix can be considered as square formed by rows and columns of matrix
    } 
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  