#include <iostream>
using namespace std;
/* At Monsters University (MU), a student is considered a staleman if they’ve taken upto
30 credit hours, a phosphorous if they’ve taken between 31 and 60 credit hours (both inclusive), a
janitor if they’ve taken between 61 and 90 credit hours or serious if you’ve taken more than 90
credit hours. Write a program that prompts a monster to enter the number of credit hours that
they’ve taken and outputs a greeting accordingly. 
*/

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
