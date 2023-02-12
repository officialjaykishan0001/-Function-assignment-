//problem : Given an age of a person . write a function to check the person eligible for voot or not.
#include<iostream>
using namespace std;

void vootCheck ( int x){
    if(x>=18)
    {
        cout<<"yes, you are elegible for voot";
    }
    else{
        cout<<"no , you are not eligible for voot ";
    }
}


int main()
{
    int age;
    cout<<"enter your age : ";
    cin>>age;

    vootCheck(age);
    return 0 ;
}