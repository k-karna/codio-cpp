/*
Lab 1
For this lab, you will create a Student class that has the following private class attributes:

    string name - name of the student
    int grade - student’s grade level
    int score - test score of the student

Now, you want to define a class function called StudentStatus that takes a student’s int score as a parameter and
checks whether the score is a passing score or not. A passing score is 65 or higher. 
If the score is less than 65, then the student did not pass their grade and will remain in the same 
grade they are now. Otherwise, if the student has a score of 65 or higher, then they have passed
and will move on to the next grade and their grade attribute will increase by 1. 
The function should also output a message providing some context regarding whether 
the student has been promoted to the next grade or not.
*/

#include <iostream>
using namespace std;

//add class definitions below this line
class Student {
  public:
    Student(string n, int g) {
      name = n;
      grade = g;
    }

    void StudentStatus(int s) {
      if (s < 65) {
        score = s;
        cout<<name<<" has not graduated and will remain in grade ";
        cout<<grade<<"."<<endl;
      }
      else {
        score = s;
        cout<<name<<" has graduated and will be promoted to grade ";
        cout<<grade + 1<<"."<<endl;
      }
    }
  private:
    string name;
    int grade;
    int score;
};


//add class definitions above this line

int main() {
  
  //add code below this line

  Student alice("Alice",4);
  alice.StudentStatus(60);
  alice.StudentStatus(90);

  //add code above this line
  
  return 0;
  
}