//Program to solve tower of hanoi problem using recursion and backtracking.

#include<bits/stdc++.h>

using namespace std;

void tHanoi(int n, int a, int b, int c)
{
    if(n==0)
    {
        return;
    }
    tHanoi(n-1,a,c,b);
    cout<<n<<"["<<a<<" -> "<<b<<"]"<<endl;
    tHanoi(n-1,b,a,c);
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    tHanoi(n,a,b,c);
}