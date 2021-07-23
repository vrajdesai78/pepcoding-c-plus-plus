//Program to print last index of occuring element in array using recursion
#include<bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int x)
{
    if(n==0)
    {
        return -1;
    }
    int li = lastIndex(arr, n-1, x);
    if(arr[n-1] == x)
    {
        return n-1;
    }
    return li;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<lastIndex(arr, n, x);
}