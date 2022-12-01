#include <iostream>
using namespace std;
int main()
{
    int arr[] = {95, 75, 86, 93, 76, 17, 23, 69, 40, 88, 67, 10, 37, 68, 83, 47, 11, 6, 61, 62, 0, 32, 29, 38, 36};
    // Write your code here
    int a;
    int b;
    int counter;
    for (auto num : arr)
    {
      a = a + 1;
    }
    for (b=0; b < a; b++)
    {
      counter = 0;
      for ( auto element : arr)
      {
      if ( arr[b] < element)
      {
        counter = counter + 1;
        if(counter==2)
        cout<< arr[b]<<",";
      }
      }
    }
}
