//problem : Given two number a and b. write a function that print all the odd number between them.

#include<iostream>
using namespace std;

void oddNumbers(int x, int y)
{
    for(int i=x;i<=y;i++)
    {
        if(i%2==1)
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int a,b;
    cout<<"enter the a  : ";
    cin>>a;
    cout<<"enter the b : ";
    cin>>b;

    oddNumbers(a,b);
    return 0;
}