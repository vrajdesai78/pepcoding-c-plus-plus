//Program to find first index of given element using recursion
#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[],int ind, int n, int x)
{
   if(ind == n)
   {
       return -1;
   }
   int fInd = firstIndex(arr, ind + 1, n, x);
   if(arr[ind] == x)
   {
       return ind;
   }
   return fInd;
};

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<firstIndex(arr, 0, n, x);
}