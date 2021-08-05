#include<bits/stdc++.h>
using namespace std;
void SortArrayInOnePass(int *arr, int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        if(arr[s]==0 && arr[e]==1)
        {
            s++;
            e--;
        }
        else if(arr[s]==0 && arr[e]==0)
        {
            s++;
        }
        else if(arr[s]==1 && arr[e]==1)
        {
            e--;
        }
        else
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n=sizeof(arr)/sizeof(int);
    SortArrayInOnePass(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}