#include<iostream>
using namespace std;
int main()
{
    const int inches_per_foot {12};
    double shelf_depth{};
    double shelf_length {};
    int box_size {};
    cout<<"Enter shelf length (feet): ";
    cin>>shelf_length;
    cout<<"Enter shelf depth (feet): ";
    cin>>shelf_depth;
    cout<<"Enter length of the size of a box (inches): ";
    cin>>box_size;
    //calculating ther number of whole boxes needed to fill the shelf.
    long boxes {static_cast<long>((shelf_length*inches_per_foot)/box_size)*
                static_cast<long>((shelf_depth*inches_per_foot)/box_size)};
                
    cout<<"The number of boxes that can be contained in a single layer is: "<<boxes<<endl;            
}
