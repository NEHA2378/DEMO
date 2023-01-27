#include<iostream>
using namespace std;
int main()
{
    double value {};
    cout<<"Please enter a number between 1 and 100: ";
    cin>>value;
    if (value >= 1 && value <= 100)
    {
        cout<<"The number you entered is ";
        
           if (value > 50)
           cout<<"greater than 50"<<endl;
           else if (value < 50)
           cout<<"less than 50"<<endl;
           else
           cout<<"50"<<endl;
    }
    else
    cout<<"The number is not between 1 and 100."<<endl;
}
