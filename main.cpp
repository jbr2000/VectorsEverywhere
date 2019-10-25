#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(NULL)); //only do once per program run
    
    int randomNumber;
    int a;
    vector <int> list;

    cout<<"a? ";
    cin>>a;

    for(int i=0; i<a; i++)
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

    return 0;
}
    

