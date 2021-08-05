/* Global decleration of n(number of element of array) just to overload the << operator
for the array printing and value of n is same in both the array for the same */


/* for the other approach we can use the logic for segregation of 0's and 1's in one pass 
conside negative element as 0 and positive element as 1*/


#include<bits/stdc++.h>
using namespace std;
int n;
void SegregatePositiveNegative(int arr[])
{
    int i=0,k=0;
    for(;k<n;k++)
    {
        if(arr[k]<0)
        {
            swap(arr[k],arr[i]);
            i++;
        }
    }
}
ostream& operator<<(ostream &cout, int arr[])
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return cout;
}
int main()
{
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int arr1[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
    n=sizeof(arr)/sizeof(int);
    SegregatePositiveNegative(arr);
    SegregatePositiveNegative(arr1);
    cout<<arr<<arr1;
}