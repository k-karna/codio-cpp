/*


*/
#include <iostream>
using namespace std;

//add class definitions below this line

//structs are like classes, except everything inside a structs
// is PUBLIC.

struct Person {
  string name;
  int age;
  double salary;
};

//add class definitions above this line

int main() {
  
  //add code below this line

  Person p;
  p.age = 50;
  cout<<p.age<<endl;

  //If security is not an issue, struct can well be used.

  //add code above this line
  
  return 0;
  
}