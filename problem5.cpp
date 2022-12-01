#include <iostream>

/*Write a C++ program that declares and initializes an array of the integer values 13, 4, 2,
98, 42, 41, 29, 71, 15, 23. Use a for loop to iterate over the values in this array and calculate the
average of the odd values in the array*/


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
  
  





