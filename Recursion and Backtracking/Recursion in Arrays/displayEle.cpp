//Program to display the elements of an array using recursion
#include<bits/stdc++.h>
using namespace std;

void displayEle(int arr[], int n)
{
    if(n==0)
    {
        return;
    }
    displayEle(arr, n-1);
    cout<<arr[n-1]<<endl;
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
    displayEle(arr, n);
}