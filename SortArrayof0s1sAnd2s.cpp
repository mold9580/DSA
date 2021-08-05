#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
void sort012(int *arr)
{
     int a[3]={0,0,0};
        for(int i=0;i<n;i++)
        {
            a[arr[i]]++;
        }
        int j=0;
        for(int i=0;i<3;i++)
        {
            while(a[i])
            {
                arr[j]=i;
                j++;
                a[i]--;
            }
            
        }
}
ostream& operator<<(ostream &cout, int *arr)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return cout;
}
int main()
{
    int arr[]={0,1,1,2,2,1,1,0};
    n=sizeof(arr)/sizeof(int);
    sort012(arr);
    cout<<arr;
}