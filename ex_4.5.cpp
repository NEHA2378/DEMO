#include<iostream>
using namespace std;
int main()
{
    int mice {};
    int brown {};
    int white {};
    cout<<"How many brown mice do you have? ";
    cin>>brown;
    cout<<"How any white mice do you have? ";
    cin>>white;
    if (brown < 0 || white <0)
    {
        cout<<"one cannot have a negative amount of mice...."<<endl;
        return 1;
    }
    mice = brown + white;
    
    cout<<"You have "<<mice<<(mice ==  1? " mouse": " mice")<<" in total."<<endl;
    if (mice == 1)
    {
        cout<<"It is a "<<(brown? "brown" : "white")<<"mouse."<<endl;
    }
    else
    {
        cout<<"of these mice, "<<brown<< ' ' <<(brown == 1? "is a" : "are")
        <<" brown "<<(brown == 1? "mouse" : "mice")<<'.'<<endl;
    }
}
