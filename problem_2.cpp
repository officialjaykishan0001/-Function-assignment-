//problem :Given a radiud of a circle . write a function to print the area and curcumference of the circle?

#include<iostream>
using namespace std;

void A_C(int r)
{
    float area = 3.14 * r*r;
    float curcumference = 2*3.14*r;
    cout<<"the area of the circle is : "<<(area)<<endl;
    cout<<"the curumference of the circle is : "<<(curcumference)<<endl;   
}

int main()
{
    int r;
    cout<<"enter the radius of the circle : ";
    cin>>r;

    A_C(r);
    return 0;
}