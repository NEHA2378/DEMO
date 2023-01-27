#include<iostream>
using namespace std;
int main()
{
    int value {};
    cout<<"Enter any integer:";
    cin>>value;
    int inverted_value {~value};
    unsigned int hex_digits {2 * sizeof(int)};
    unsigned int hex_value_width {hex_digits + 2};
    unsigned int column_width {hex_value_width + 4};
    cout<<column_width<<" value "<<column_width<<" ~value "<<column_width<<" ~value+1"<<endl;
}
