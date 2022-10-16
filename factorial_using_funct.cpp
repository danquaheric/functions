#include<iostream>
using namespace std;
int factorial(int n);
int main()
{

    int n = 10;
    int res = factorial(n);
    cout<<res;
}
int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
