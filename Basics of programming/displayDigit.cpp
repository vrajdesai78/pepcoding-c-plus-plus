//Program to print all digits line by line of given input number
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
    long long int num;
    cin>>num;    
    int numOfDigits = countDigit(num);
    long long int div = (int) pow(10, numOfDigits-1);
    while(div>0)
    {
        cout<<num/div<<endl; 
        num = num%div;
        div /= 10;
    }
}