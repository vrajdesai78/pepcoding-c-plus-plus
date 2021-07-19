//Program to find x raise to n in log(n) time complexity using recursion.

#include<bits/stdc++.h>

using namespace std;

int logPower(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans = logPower(x, n/2);
    if(n%2 == 0)
    {
        return ans*ans;
        
    }
    else
    {
        return x*ans*ans;
    }
};

int main()
{
    int x, n;
    cin>>x>>n;
    cout<<logPower(x, n);
}