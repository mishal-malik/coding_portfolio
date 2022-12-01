#include <iostream>
using namespace std;
int main()
{
    int arr[] = {95, 75, 86, 93, 76, 17, 23, 69, 40, 88, 67, 10, 37, 68, 83, 47, 11, 6, 61, 62, 0, 32, 29, 38, 36};
    int l1, l2, l3;
    int a=0;
    
    // Write your code here
    for(auto value: arr){a=a+1;}
    for( int i=0; i<2; i=i+1)
    {
      auto value= arr[i];

      for( int j= i+1; j< a; j= j+1 )
      {
         if(arr[j] != value)
        {
          if(arr[j] > value)
          {
            value =arr[j];
            arr[j]=arr[i];
            arr[i]= value;

          }
        }
        }
    
    l2= arr[1];
      
}
  

     cout << l2<< endl;
}
