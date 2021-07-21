//Write a program to calculate the x raise to n using recursion.

#include<bits/stdc++.h>

using namespace std;

int exponential(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    return x * exponential(x, n-1);
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<exponential(x, n);
}