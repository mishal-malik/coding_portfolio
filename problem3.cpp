#include <iostream>
using namespace std;

int main() {
int credits;
cout<<"How many credit hours have you completed: ";
cin>>credits;
if(credits<=30)
{
  cout<<"Dude you're a staleman";
}
else if(credits<=60)
{
cout<<"Dude you're a phosphorous";
}
else if (credits<=90)
{
  cout<<"Dude you're a janitor";
}
else{
  cout<<"Dude you're a serious";
}
}