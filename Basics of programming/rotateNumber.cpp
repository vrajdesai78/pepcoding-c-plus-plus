//Program to rotate a number k times
#include<bits/stdc++.h>

using namespace std;

int countDigit(long long int num)
{
    int ans=0;
    while(num>0)
    {
        num/=10;
        ans++;
    }
    return ans;
};

int main()
{
    long long int n, k;
    cin>>n>>k;
    int numOfDigit = countDigit(n);
    int div = pow(10,numOfDigit-k);
    long long int rem = n%div;
    long long int ans = rem;
    int temp = pow(10,k)+0.5;
    cout<<ans*temp;
    // cout<<ans<<endl;
    // ans += rem;
    // cout<<ans;
}