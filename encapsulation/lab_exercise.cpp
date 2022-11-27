/*
Problem
Write a class named Person that has attributes string name, int age, and string occupation. 
These attributes should be private. Create getters and setters for each attribute following C++ conventions.

Requirements

    Declare the instance Person("Citra Curie", 16, "student")
    The function GetName() returns Citra Curie
    The function SetName("Rowan Faraday") changes the name attribute to “Rowan Faraday”
    The function GetAge() returns 16
    The function SetAge(18) changes the age attribute to 18
    The function GetOccupation() returns student
    The function SetOccupation("plumber") changes the occupation attribute to “plumber”
    
*/




#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Person {
  public:
    Person(string n, int a , string o) {
      name = n;
      age =a;
      occupation = o;
    }
  

  string GetName() {
    return name;
  }
  int GetAge() {
    return age;
  }
  string GetOccupation() {
    return occupation;
  }

  void SetName(string n){
    name = "Rowan Faraday";
  }
  void SetOccupation(string o){
    occupation = "plumber";
  }
  void SetAge(int a){
    age = 18;
  }

private:
    string name;
    int age;
    string occupation;
};
//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Person p("Citra Curie", 16, "student");
  cout << p.GetName() << endl;
  p.SetName("Rowan Faraday");
  cout << p.GetAge() << endl;
  p.SetAge(18);
  cout << p.GetOccupation() << endl;
  p.SetOccupation("plumber");
  cout << p.GetName() << endl;
  cout << p.GetAge() << endl;
  cout << p.GetOccupation() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}