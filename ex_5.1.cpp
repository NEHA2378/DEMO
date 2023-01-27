#include<iostream>
using namespace std;
int main()
{
    int limit {};
    cout<<"Enter the upper limit for squared odd numbers: ";
    cin>>limit;
    for(int i {1}; i <=limit; i += 2)
    {
        cout<<i<<" squared is: "<<i * i<<endl;
    }
}
