#include<bits/stdc++.h>
using namespace std;


void factorial(vector<int> &v, int n)
{
    //use vector to store single digit of result
    //push carry's digit in the last accordingly


    //Here we have viewed the numbers in vector in reverse mannner just to reduce the time complexity
    //if we will not reverse Push_front operation will take O(n) while Push_back takes O(1)
    v.push_back(1);
    for(int i=2;i<=n;i++)
    {
        int carry=0,mul;
        for(int j=0;j<v.size();j++)
        {
            mul=(v[j]*i)+carry;
            v[j]=mul%10;
            carry=mul/10;
        }
        while(carry)
        {
            v.push_back(carry%10);
            carry/=10;
        }
    }
    //Reverse the vector to print the output in regular manner
    reverse(v.begin(),v.end());
}


int main()
{
    int n;
    cin>>n;
    vector<int>v;
    factorial(v,n);
    for(auto e:v) cout<<e;
    cout<<endl;
}