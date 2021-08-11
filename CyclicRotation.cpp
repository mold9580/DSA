#include<iostream>
using namespace std;
int n;
void CyclicRotateByOne(int *arr)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
ostream & operator<<(ostream & cout, int *arr)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return cout;
}
int main()
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    CyclicRotateByOne(arr);
    cout<<arr<<endl;
}