#include <iostream>
using namespace std;

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