#include<iostream>
using namespace std;
int main()
{
    const unsigned R {0x00FF0000};
    const unsigned G {0x0000FF00};
    const unsigned B {0x000000FF};
    enum class Color : unsigned
    {
        red = R,
        green = G,
        yellow = R | G,
        purple = R | B, 
        blue = B,
        black = 0,
        white = R | G | B
    };
    
    const Color color1
    {Color::yellow};
    const Color color2
    {Color::purple};
    const Color color3
    {Color::green};
    
    auto color
    {static_cast<unsigned>(color1)};
    cout<<"The components of color1 (yellow ) are: "
        << " Red:"<<((color & R)>>16)
        <<" Green:"<<((color & G)>>8)
        <<" Blue:"<<(color & B)<<endl;
        
        color = static_cast<unsigned int>(color2);
        cout<<"The components of color2 (purple) are: "
            <<" Red:"<<((color & R)>>16)
            <<" Green:"<<((color & G)>>8)
            <<" Blue:"<<(color & B)<<endl;
            
       color = static_cast<unsigned int>(color3);
       cout<<"The components of color3 (green) are: "
           <<" Red:"<<((color & R)>>16)
           <<" Green:"<<((color & G)>>8)
           <<" Blue:"<<(color & B)<<endl;
}
