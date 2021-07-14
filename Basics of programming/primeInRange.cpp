#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int n) 
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
};

int main()
{
    int high,low;
    cin>>low>>high;
    
    for(int i=low;i<=high;i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<endl;
        }
    }
}