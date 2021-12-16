#include<iostream>
using namespace std;
int GCD(int m,int n)
{
    if(m%n==0)
        return n;
    else
        GCD(n,m%n);
}
main()
{
    int m,n;
    cin>>m>>n;
    cout<<n*m/GCD(m,n);
}

