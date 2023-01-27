#include<iostream>
using namespace std;
int main()
{
    auto k{ 430u };
    auto j{ (k>>4)&~(~0u<<3)};
    cout<<j<<endl;
}
