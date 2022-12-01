#include <iostream>
using namespace std;

// Modify the file q1.cpp so that it finds and displays the three largest elements in an array of integers.

int main()
{
    int arr[] = {95, 75, 86, 93, 76, 17, 23, 69, 40, 88, 67, 10, 37, 68, 83, 47, 11, 6, 61, 62, 0, 32, 29, 38, 36};
    int l1, l2, l3;
    // Write your code here
    for( int i=0; i<3; i=i+1)
    {
      auto value= arr[i];

      for( int j= i+1; j<25; j= j+1 )
      {
         if(arr[j] != value)
        {
          if(arr[j] >value)
          {
            value =arr[j];
            arr[j]=arr[i];
            arr[i]= value;

          }
        }
        }
    l1= arr[0];
    l2= arr[1];
    l3= arr[2];    
}
  

    cout << l1 << " " << l2 << " " << l3 << endl;
}
