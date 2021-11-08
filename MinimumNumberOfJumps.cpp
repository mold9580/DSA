#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        if(n==0 || n==1)
        {
            return 0;
        }
        if(arr[0]==0)
        {
            return -1;
        }
        int count=0,temp,idx,maxupto;
        for(int i=0;i<n;)
        {
            //after taking the most effective step if we are stuck at zero return -1
            if(arr[i]==0) return -1;
            if((i+arr[i])>=n-1) return count+1; //if current step can make you reach to the end then return count+1
            else
            {
                //check for that index from where the total distance covered by current step and next step is maximum
                idx=i+1;
                maxupto=i+1+arr[i+1];
                for(int j=i+2;j<=i+arr[i] && j<n;j++)
                {
                    if((j+arr[j])>maxupto)
                    {
                        idx=j;
                        maxupto=j+arr[j];
                    }
                }
                count++;
                i=idx;//reach to that index then again chech iteratively for next step;
            }
        }
        return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
