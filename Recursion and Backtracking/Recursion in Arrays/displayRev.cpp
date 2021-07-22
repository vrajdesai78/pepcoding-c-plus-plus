//Program to print the reverse of an array using recursion
#include<bits/stdc++.h>
using namespace std;

void displayRev(int arr[], int n)
{
    if(n==0)
    {
        return;
    }
    cout<<arr[n-1]<<endl;
    displayRev(arr, n-1);
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
    displayRev(arr, n);
    return 0;
}