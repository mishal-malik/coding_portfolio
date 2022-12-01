#include <iostream>
using namespace std;
/*Your mission, should you chose to accept it, is to write a program in C++ that prompts the user to
enter their annual salary, accepts the input, calculates and displays the applicable wealth tax. A
sample run of your program should be similar to the following:
Please enter your annual salary: 1500000
You must pay a tax of Rs. 60000*/

int main() {
int salary;
cout<<"Please enter your salary: ";
cin>>salary;
if(salary<=600000)
{
  cout<<"You must pay a tax of: Rs." <<0;
}
else if(salary<=1200000)
{
cout<<"You must pay a tax of: Rs."<< 0.05*(salary-600000);
}
else if (salary<=1800000)
{
  cout<<"You must pay a tax of: Rs."<< 30000+ 0.1*(salary-1200000);
}
else if (salary<=2500000)
{
  cout<<"You must pay a tax of: Rs."<< 90000+ 0.15*(salary-1800000);
}
else if (salary<=3500000)
{
  cout<<"You must pay a tax of: Rs."<< 195000+ 0.17*(salary-2500000);
}
else{
  cout<<"You must pay a tax of: Rs."<< 400000;
}
}
