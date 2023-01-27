//swapping integers

#include<iostream>
using namespace std;
int main()
{
    int first {}, second {};
    cout<<"Enter two integers separated by a space: ";
    cin>>first>>second;
    
    first ^= second;
    second ^= first;
    first ^= second;
    cout<<"In reverse order they are "<< first <<" and "<< second <<endl;
}
