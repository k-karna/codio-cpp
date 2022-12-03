/*

Lab Challenge
Problem
Create a BankAccount struct in the IDE to the left which has two double attributes checking and savings. 
Create a function called ToString within the struct that prints a representation of a BankAccount struct which includes these attributes.
You MUST use struct within your code in order to receive credit for this challenge.
*/

#include <iostream>
#include <iomanip>
using namespace std;

//add definitions below this line

struct BankAccount {
  double checking;
  double savings;
  
  void ToString() {
    cout << "BankAccount[checking=";
    cout << setprecision(2) << fixed << checking;
    cout << ", savings="; 
    cout << setprecision(2) << fixed << savings;
    cout << ']' << endl;
  }
};



//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  BankAccount account1;
  account1.checking = 2432;
  account1.savings = 89.52;
  BankAccount account2;
  account2.checking = 1998;
  account2.savings = 239.43;
  account1.ToString();
  account2.ToString();

  //DO NOT EDIT code above this line
  
  return 0;
  
}