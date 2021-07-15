//Program to check whether number is prime or not
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        for(int i=2;i<num;i++)
        {
            if(num%i == 0)
            {
                cout<<num<<" is not prime"<<endl;
                return 0;
            }
        }
        cout<<num<<" is prime"<<endl;
    }
}
