#include <iostream>
using namespace std;
int main()
{
    int arr[] = {95, 75, 86, 93, 76, 17, 23, 69, 40, 88, 67, 10, 37, 68, 83, 47, 11, 6, 61, 62, 0, 32, 29, 38, 32};
    int mostFreq ;
    int a;
    int counter;
    int counter1;
   for (auto value : arr)
   {
     counter = 0;
     for (auto element : arr)
     {
       if ( value == element)
       {
         counter = counter + 1;}
         if (counter > counter1 || counter ==  counter1)
         {
           counter1 = counter;
           mostFreq = value;}
         }
       }
     
   

    // Write your code here
    
    cout << "The most frequently occurring element is " << mostFreq << std::endl;
}
