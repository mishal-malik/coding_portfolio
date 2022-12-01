#include <iostream>
using namespace std;
int main() {

  auto values = {13, 4, 2, 98, 42, 41, 29, 71, 15, 23};

  auto total=0;

  for ( auto oddvalue: values )
  {
    int a= oddvalue%2;
    if (a==1)
    total= total+ oddvalue;
  }
  auto average=total/6;
  
  cout << "Your average is: " << average << 
  endl;
}
  
  





