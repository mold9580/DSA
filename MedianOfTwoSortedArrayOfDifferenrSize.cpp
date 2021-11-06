#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mm(int *arr, int m)
    {
        if(m&1) return arr[m/2];
        return (arr[m/2]+arr[m/2-1])/2.0;
    }
    double m2(int a, int b)
    {
        return (a+b)/2.0;
    }
    double m3(int a, int b, int c)
    {
        return (a+b+c)-max(a,max(b,c))-min(a,min(b,c));
    }
    double m4(int a,int b,int c,int d)
    {
        return ((a+b+c+d)-max(a,max(b,max(c,d)))-min(a,min(b,min(c,d))))/2.0;
    }
    double median(int *arr1, int n, int *arr2, int m)
    {
        /*
        Some of the base condition has been handeled carefully when n==0 or n==1 or n==1
        */
        if(n==0) return mm(arr2,m);
        
        if(n==1)
        {
            if(m==1) return m2(arr1[0],arr2[0]);
            if(m==2) return m3(arr1[0],arr2[0],arr2[1]);
            if(m&1)  return m2(arr2[m/2],int(m3(arr1[0],arr2[m/2-1],arr2[m/2+1])));
            return m3(arr1[0],arr2[m/2],arr2[m/2-1]);
        }
        if(n==2)
        {
            if(m==2) return m4(arr1[0],arr1[1],arr2[0],arr2[1]);
            if(m&1) return m3(arr2[m/2],max(arr2[m/2-1],arr1[0]),min(arr2[m/2+1],arr1[1]));
            return m4(arr2[m/2],arr2[m/2-1], max(arr2[m/2-2],arr1[0]),min(arr2[m/2+1],arr1[1]));
        }
        /*
        when n>2 i.e the size of smaller array is grater than 2 
        calculate the median index(for odd n) or the index of first condidate of median(for even n), Similarly for m
        */
        int a=(n-1)/2;
        int b=(m-1)/2;
        /*
        Here, we are trying to eleminate n/2-1 element from both the array to shorteh our search space
        By doing this we are making sure that the four combination of n and m being odd and even is preserved for the desired solution
        e.g.: [1 2 3 4 5 6 7 8 9 10] eleminating 1 or 2 or 3 or 4 element from both side won't affect the median
        */
        if(arr1[a]<=arr2[b]) return median(arr1+a,n/2+1,arr2,m-a);
        return median(arr1,n/2+1,arr2+a,m-a);
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size(),m=nums2.size();
        int arr1[1005],arr2[1005];
        /*
        To perform our logic, covert the vector in array bcz I really have no idea how to impliment the same using vector -_-
        Also make sure that the size of first array is smaller
        */
        for(int i=0;i<n;i++) arr1[i]=nums1[i];
        for(int i=0;i<m;i++) arr2[i]=nums2[i];
        if(n>m) return median(arr2,m,arr1,n);
        
        return median(arr1,n,arr2,m);
    
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