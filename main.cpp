/*
Robert Campbell
COSC - 1436
This program will convert the number of pennies into the equivilant Dollars, Quarters, Dimes, and Nickles.
*/

#include <iostream>
using namespace std;

int main()  
{
//Variables
  int Dollars;
  int Quarters;
  int Dimes;
  int Nickles;
  int Pennies;
  
  int Dollars_Value = 100;
  int Quarters_Value = 25;
  int Dimes_Value = 10;
  int Nickles_Value = 5;
  int Pennies_Value = 1;
  
//Input
  cout << "So, how many pennies do we have today Joe? " ;
  cin >> Pennies;
  
//Proccess(calculations) The value for Pennies will be udated after each calculation to lastly output the reamaing Pennies if any.
  Dollars = Pennies / Dollars_Value;
  Pennies %= Dollars_Value;
  
  Quarters = Pennies / Quarters_Value;
  Pennies %= Quarters_Value;
  
  Dimes = Pennies / Dimes_Value;
  Pennies %= Dimes_Value;
  
  Nickles = Pennies / Nickles_Value;
  Pennies %= Nickles_Value;

//Output what would be given to Joe after he trades in his Pennies.
  cout << "\nyou will receive: \n" << "\n" << Dollars << " dollars " << endl;
  cout << "\n" << Quarters << " quarters " << endl;
  cout << "\n" << Dimes << " Dimes " << endl;
  cout << "\n" << Nickles << " Nickles " << endl;
  cout << "\n" << Pennies << " pennies " << endl;

  return 0;
}