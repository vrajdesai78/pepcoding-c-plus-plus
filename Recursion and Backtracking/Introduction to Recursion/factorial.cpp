//Program to find the factorial of a number using recursion

#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}
