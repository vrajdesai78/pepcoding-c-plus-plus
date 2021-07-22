//Program to find maximum element from array using recursion
#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    if(n==0)
    {
        return 1;
    }
    int maxNum = findMax(arr, n-1);
    if(arr[n-1] > maxNum)
    {
        return arr[n-1];
    }
    return maxNum;
};

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findMax(arr, n);
}