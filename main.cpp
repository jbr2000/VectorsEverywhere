#include <iostream>
#include <cstdio>
#include <ctime>
#include <vector>
using namespace std;

//Prototypes
vector <int> addRandomNums(int, vector <int>);
void printVector (vector<int>);
void searchWithinVector (int, vector<int>);

int main()
{
    srand(time(NULL)); //only do once per program run
    
    int randomNumber;
    int amount;
    int search;
    vector <int> list;
    

    cout<<"How many numbers should we make? ";
    cin>>amount;
    cout<<"What number should we search for? ";
    cin>>search;
    
    list = addRandomNums(amount, list);
    printVector(list);
    searchWithinVector(search, list);

    return 0;
  }
  
  vector <int> addRandomNums(int howMany, vector <int> original)  
  {
  for(int i=0; i<howMany; i++)
    {
         int num = rand() % 10;

        original.push_back(num);
    }
  return original;
  }

  void printVector(vector<int> printing)
  {
  for(int i=0; i < printing.size(); i++)
    {
        cout<<printing[i];
        if( i < printing.size()-1 )
        {
            cout<<", ";
        }
        else
        {
            cout<<endl;
        }
    }
  } 

void searchWithinVector(int searchFor, vector<int> within)
{        
  bool found;      
  for(int i=0; i<within.size(); i++)
  {
        if( searchFor == within.at(i) )
        {
            cout<<searchFor<<" is at location "<<i<<endl;
          found = true;
        }
  }
  if( found == false )
    {
        cout<<searchFor<<" is not in the list."<<endl;
    }
} 

























 
