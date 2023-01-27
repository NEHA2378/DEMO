// exercise 2.4 : calculating the height of a tree
#include<iostream>
using namespace std;
int main()
{
    const double inches_per_foot {12.0};
    const double pi {3.141592653589793238};
    const double pi_degrees {180.0};
    double d_feet {};
    double d_inches {};
    cout<<" Enter the distance from the tree in feet and inches.";
    cin>>d_feet>>d_inches;
    const double distance {d_feet + d_inches / inches_per_foot};
    double angle {};
    cout<<"Enter the angle of the top of the tree in degrees.";
    cin>>angle;
    angle *= pi / pi_degrees;
    double eye_height {};
    cout<<"Enter your eye height from the ground in inches.";
    cin>>eye_height;
    eye_height /= inches_per_foot;
    const double height {eye_height + distance * (angle)};
    const unsigned height_feet {static_cast<unsigned>(height)};
    const unsigned height_inches {static_cast<unsigned>(inches_per_foot *(height - height_feet))};
    cout<<"\nThe height of the tree is:"<<height_feet<<" feet"<< height_inches <<" inches.\n"<<endl;
}
