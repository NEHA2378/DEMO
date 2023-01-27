#include<iostream>
using namespace std;
int main()
{
    int n {};
    cout<<"enter an integer: ";
    cin>>n;
    cout<<"The value is "<<(n <= 20 ? "not greater then 20."
    : n <= 30 ? "greater than 20 but not greater than 30."
    : n <= 100 ? "greater than 30 but not exceeding 100."
    : "greater than 100.")<<endl;
}
