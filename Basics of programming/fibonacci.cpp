//Program to find fibonacci series till given input
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int first=0;
    int second=1;
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i=0;i<n-2;i++)
    {
       int temp = first+second;
       cout<<temp<<endl;
       first = second;
       second = temp;
    }
}