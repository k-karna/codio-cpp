/*

Recursion Exercise 4
Problem
Write a recursive function called 
ReverseString() that takes a string as a parameter. Then it returns the string in reverse order.


*/

#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string s) {
  if (s.length() == 1) {
    return s;
  }
  else {
    return s.substr(s.length() - 1) + ReverseString(s.substr(0, s.length() - 1));
  }
}



//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
