#include <iostream>
using namespace std;

int main()
{
    int arr[] = {95, 75, 86, 93, 76, 17, 23, 69, 40, 88, 67, 10, 37, 68, 83, 47, 11, 6, 61, 62, 0, 32, 29, 38, 36};
    int target = -23;
    int index= -1,j;
    int a = 0;
    for( auto value : arr){a=a+1;}
    for(int i=0; i<a; i=i+1){
      if (arr[i] == target){ index = i;}
    }
    
    cout << "Found at index " << index <<endl;
}