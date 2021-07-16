//Program to reverse a number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    long long int rev=0;
    cin>>num;
    while(num>0)
    {
        int rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }
    cout<<rev<<endl;
}