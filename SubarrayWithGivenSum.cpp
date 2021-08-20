#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int sum)
{
    vector<int> v;
    int c=arr[0],i=0,j=-1;   //it is always better to check for the corner cases
                            //here initilization of i,j,sum and propogation steps are mondatory to check for the termination of
                            //condition. If we keep the pointer one step ahead and first add or subtract then increment the pointer
                            //there is a chance that it would fail at last element where sum==arr[n-1] bcoz while loop will be 
                            //without checking the c==sum

                            //This code can also give runtime error if i goes beyond last element
    while(i<n && j<n && j<=i)
    {
        if(c==sum)
        {
            v.push_back(j+2);
            v.push_back(i+1);
            return v;
        }
        else if(c<sum) {i++;c+=arr[i];}
        else {j++;c-=arr[j];}
    }
    v.push_back(-1);
    return v;
}


int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> v=subarraySum(arr,n,sum);
    for(auto e:v) cout<<e<<" ";
    cout<<endl;
}