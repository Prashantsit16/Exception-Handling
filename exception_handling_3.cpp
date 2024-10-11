//Prashant
//23070123102
#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter a year greater than 2000: ";
    cin>>yr;
    try
    {
        if (yr<2000)
        {
            
            throw "you entered year less than 2000";
        }
        cout<<"you have entered year: "<<yr;
    }
    catch(const char *msg )
    {
        cout<< msg;
}
}