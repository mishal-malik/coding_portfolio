#include <iostream>
using namespace std;
//Write a C++ program using for loops to display the following two patterns:
int main() {
int star;
int space;

for (star=7, space=0; star>0; star-=2, space+=1)
{
  for (int i=0;i<space; i++)
  {
    cout<<" ";
  } 
  for (int j=0;j<star;j++){
    cout<<"*";
  }
  cout<<endl;
  }
  cout<< endl;
  cout<< endl;
  cout<< endl;

  for(star=1,space=3; star<9; star+=2, space-=1)
  {
    for(int i=0; i<space; i++)
    {
      cout<<" ";
    }
    for (int j=0; j<star; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

for (star=5, space=1; star>0; star-=2, space+=1)
{
  for (int i=0;i<space; i++)
  {
    cout<<" ";
  } 
  for (int j=0;j<star;j++){
    cout<<"*";
  }
  cout<<endl;
  }
}
  
  




