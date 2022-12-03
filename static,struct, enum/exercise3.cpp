/*
Exercise 3
Create a struct called Student and set it up so the code in main will print the expected output below.
Requirement(s)

    You MUST use struct within your code in order to receive credit for this exercise.
    You CANNOT use or declare a class in your code.
    You CANNOT add or make any changes to the code in main, otherwise, you might not receive credit for your work!



*/

#include <iostream>
using namespace std;

//add definitions below this line
struct Student {
  string name = "Amy";
  int age = 18;
  string major = "Physics";
};


//add definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Student amy;
  cout << amy.name << endl;
  cout << amy.age << endl;
  cout << amy.major << endl;
  
  cout << endl;
  
  Student adam;
  adam.name = "Adam";
  adam.age = 19;
  adam.major = "Computer Science";
  cout << adam.name << endl;
  cout << adam.age << endl;
  cout << adam.major << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}