// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
        /*
        traverse both array to find the max element in input and increment by one to avoid collosion with zero
        we can keep both, the actual number in input sequence and the number to be in output sequence at the sme place by performing
        the following operation:
            suppose actual number is A and Max number is MX and next smaller number is B then perform:
                A=A+B*MX
            we can retrieve the desired number accordingly
            to get Actual number=A%MX
            to get next smaller=A/MX
        
        After traversing both list we divide every single element by MX to get the numbers in output in  sequence
        */
	  int mx=INT_MIN;
      for(int i=0;i<n;i++) mx=max(mx,arr1[i]);
      for(int i=0;i<m;i++) mx=max(mx,arr2[i]);
      mx++;
      int i=0,j=0,k=0;
      while(i<n && j<m)
      {
          int a=arr1[i]%mx;
          int b=arr2[j]%mx;
          if(a<b)
          {
              if(k<n) arr1[k]+=a*mx;
              else arr2[k-n]+=a*mx;
              i++,k++;
          }
          else
          {
              if(k<n) arr1[k]+=b*mx;
              else arr2[k-n]+=b*mx;
              j++,k++;
          }
      }
      while(i<n)
      {
          int a=arr1[i]%mx;
          if(k<n) arr1[k]+=a*mx;
          else arr2[k-n]+=a*mx;
          i++,k++;
      }
      while(j<m)
      {
          int b=arr2[j]%mx;
          if(k<n) arr1[k]+=b*mx;
          else arr2[k-n]+=b*mx;
          j++,k++;
      }
      for(int i=0;i<n;i++) arr1[i]/=mx;
      for(int i=0;i<m;i++) arr2[i]/=mx;
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends