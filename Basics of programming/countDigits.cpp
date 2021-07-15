#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    cin>>num;
    int cnt=0;
    while(num>0)
    {
        num /= 10;
        cnt++;
    }
    cout<<cnt;
}