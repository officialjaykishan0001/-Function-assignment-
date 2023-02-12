//problem : Given two number a and b . write a function that prints all prime numbers presentated between
// a and b.

#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"ente the a : ";
    cin>>a;
    cout<<"enter the b : ";
    cin>>b;

    for(int i=a;i<=b;i++)
    {
        if(prime(i))
        {
            cout<<i<<" ";
        }

    }

    cout<<endl;

    return 0;
}