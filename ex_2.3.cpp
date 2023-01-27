//convert inches to feet and inches
#include<iostream>
using namespace std;
int main()
{
    unsigned feet{}, inches{};
    cout<<"Enter a distance in inches."<<endl;
    cin>>inches;
    const unsigned inches_per_foot {12};
    feet = inches / inches_per_foot;
    inches = inches % inches_per_foot;
    cout<<"The distance corresponds to "<< feet<< " feet "<< inches<< " inches "<<endl;
}
