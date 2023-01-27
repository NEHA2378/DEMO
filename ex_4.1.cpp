//testing whether two integers are equal
#include<iostream>
using namespace std;
int main()
{
    int value1 {};
    int value2 {};
    
    cout<<"Please input two integers, separated by a space: ";
    cin>>value1>>value2;
    cout<<endl;
    
    if (value1 == value2)
    cout<<"The values you entered are the same."<<endl;
    else
    cout<<"The values you enter are not same ("<<value1<<" != "<< value2 <<")."
    <<endl;
}
