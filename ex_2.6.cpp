//exercise 2.6
#include<iostream>
using namespace std;
int main()
{
    long a {};
    long b {};
    cout<<"Enter a positive integer: ";
    cin>> a;
    cout<<"Enter another different positive integer: ";
    cin>> b;
    const long larger {(a*(a/b)+b*(b/a))/(a/b+b/a)};
    const long smaller {(b*(a/b)+a*(b/a))/(a/b+b/a)};
    cout<<"The larger integer is: "<<larger<<endl
        <<"The smaller integer is: "<<smaller<<endl;
}
