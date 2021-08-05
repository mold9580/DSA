#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
void sort012InOnePass(int arr[])
{
    int i=0,j=0,k,temp;
    while(arr[i]==0)
    {
        i++;
    }
    i--;


    j=i+1;
    while(arr[j]==1)
    {
        j++;
    }
    j--;


    k=n-1;
    while(arr[k]==2)
    {
        k--;
    }
    k++;

    temp=j+1;
    while(temp<k)
    {
        if(arr[temp]==1)
        {
            j++;
            temp++;
        }
        else if(arr[temp]==0)
        {
            swap(arr[i+1],arr[temp]);
            i++;
            temp++;
        }
        else
        {
            swap(arr[k-1],arr[temp]);
            k--;
        }
    }
}
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
    sort012InOnePass(arr);
    //sort012(arr);
    cout<<arr;
}