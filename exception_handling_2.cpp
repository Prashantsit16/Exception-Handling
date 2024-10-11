//Prashant
//23070123102
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a positive number: ";
    cin>>a;
    try
    {
       if (a<0)
       {
        throw a;
       }
    }
    catch(const a)
    {
        cout<<"You entered "<<a<<" which is a negative number ";
    }
    

}