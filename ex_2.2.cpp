#include<iostream>
using namespace std;
int main()
{
    const double pi {3.141592653589793238};
    cout<<"This program will compute the area of circle."<<endl
        <<"It uses an approximation of pi equal to"<<pi <<"."<<endl;
    double radius {};
    cout<<"Enter the radius: ";
    cin>>radius;
    int precision;
    cout<<" Please enter the desired precision of the output (significant figures): ";
    cin>>precision;
    
    cout<<precision;
    
    const auto area_of_circle = pi*radius*radius;
    cout<<" The area of circle is :"<< area_of_circle<<" square units."<<endl;
    
    return 0;
}
