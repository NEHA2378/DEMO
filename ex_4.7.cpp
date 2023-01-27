#include<iostream>
using namespace std;
int main()
{
    char ch {};
    cout<<"Enter a letter: ";
    cin>>ch;
    if(!std::isalpha(ch))
    {
        cout<<"That's not a letter!"<<endl;
        return 1;
    }
    cout<<"'"<< ch <<"' is "<< (std::islower(ch) ? "lowercase" : "uppercase")<<'.'<<endl;
    cout<<"'" <<ch <<"' is a ";
    switch (tolower(ch))
    {
        case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
        cout<<"vowel"<<endl;
        break;
        default:
        cout<<"consonent";
        break;
    }
}
