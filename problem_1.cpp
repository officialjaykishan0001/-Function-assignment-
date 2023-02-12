//problem : writer a function to print the square first five n natural number?
#include<iostream> 
using namespace std;

void square()//function declared here.
{
    for(int i=1;i<=5;i++)
    {
        cout<<i*i<<" ";
    }

}

int main()
{
    square();//function called here.

    return 0;
}