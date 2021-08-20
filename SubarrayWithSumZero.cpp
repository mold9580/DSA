#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    if(n==1)
    {
        if(arr[0]==0) return true;
        else return false;
    }
    unordered_map<int,int>m;
    m[arr[0]]=0;
    m[0]=0;
    int arr1[n];
    arr1[0]=arr[0];
    if(arr[0]==0) return true; //Check for the corner case if the first element is zero or not
    for(int i=1;i<n;i++)
    {
        arr1[i]=arr[i]+arr1[i-1];
        if(m.find(arr1[i])!=m.end()) return true;
        else m[arr1[i]]=0;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(subArrayExists(arr,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}