#include<iostream>
using namespace std;
int main()
{
    int value1 {};
    int value2 {};
    cout<<"Please input two positive integers, separated by a space: ";
    cin>>value1>>value2;
    
    if (value1 <= 0 || value2 <= 0)
    {
        cout<<"Sorry - positive integers only."<<endl;
        return 1;
    }
    if (value1 < value2)
    {
        const auto temp = value1;
        value1 = value2;
        value2 = temp;
    }
    if (value1 % value2 == 0)
    cout<<value2<<" divides into "<< value1<<" exactly."<<endl;
    else
    cout<<value1<<" is not exactly divisible by "<<value2<<endl;
}
