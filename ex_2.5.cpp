#include<iostream>
using namespace std;
int main()
{
    const double lbs_per_kg {2.2};
    const double inches_per_foot {12.0};
    const double meters_per_foot {0.3048};
    
    double w_lbs {};
    unsigned int h_feet {};
    unsigned int h_inches {};
    cout<<"Enter your weight in pounds: ";
    cin>>w_lbs;
    cout<<"Enter your height in feet and inches: ";
    cin>>h_feet>>h_inches;
    const double w_kg {w_lbs / lbs_per_kg};
    const double h_meters {meters_per_foot*h_feet+h_inches/inches_per_foot};
    const double bmi {w_kg/(h_meters*h_meters)};
    cout<<"Your BMI is "<<bmi<<endl;
}
