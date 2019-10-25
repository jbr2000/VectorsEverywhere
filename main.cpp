#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(NULL)); //only do once per program run
    
    int randomNumber;
    int amount;
    int search;
    bool found;
    vector <int> list;

    cout<<"How many numbers should we make? ";
    cin>>amount;
    cout<<"What number should we search for? ";
    cin>>search;

    for(int i=0; i<amount; i++)
    {
        randomNumber = rand() % 10;

        list.push_back(randomNumber);
    }

    for(int i=0; i<list.size(); i++)
    {
        cout<<list[i];
        if( i < list.size()-1 )
        {
            cout<<", ";
        }
        else
        {
            cout<<endl;
        }
    }

    for(int i=0; i<list.size(); i++)
    {
        if( search == list.at(i) )
        {
            cout<<search<<" is at location "<<i<<endl;
            found = true;
        }
    }
    if( found == false )
    {
        cout<<search<<" is not in the list."<<endl;
    }
































    return 0;
}
