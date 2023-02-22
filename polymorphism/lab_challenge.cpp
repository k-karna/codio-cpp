/*

Problem
In the IDE to the left, the class Chef is already defined, as is the Display function.
However, it does not have a constructor.
Create three constructors that take one, two, and three parameters respectively. 
Note that the attributes name and cuisine are set to "null" while michelinStars is set to 0 by default.

Expected Output

Three Chef objects are instantiated, each one using a different constructor. Calling the Display function for each object should return the following text:
Function Call	Return Value
c1.Display()	Marco Pierre White is known for null cuisine and has 0 Michelin stars.
c2.Display()	Rene Redzepi is known for Nordic cuisine and has 0 Michelin stars.
c3.Display()	Thomas Keller is known for French cuisine and has 3 Michelin stars.

*/

#include <iostream>
using namespace std;

//add class definitions below this line

class Chef {
  public:
  
  //add constructors below this line
  
  Chef(string n) {
      name = n;
    }
  
    Chef(string n, string c) {
      name = n;
      cuisine = c;
    }
  
    Chef(string n, string c, int ms) {
      name = n;
      cuisine = c;
      michelinStars = ms;
    }


  //add constructors above this line
  
    string GetName() {
      return name;
    }

    string GetCuisine() {
      return cuisine;
    }

    int GetStars() {
      return michelinStars;
    }

    void Display() {
      cout << GetName() << " is known for " << GetCuisine() << " cuisine and has " << GetStars() << " Michelin stars." << endl;
    }
  
  private:
    string name = "null";
    string cuisine = "null";
    int michelinStars = 0;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Chef c1("Marco Pierre White");
  Chef c2("Rene Redzepi", "Nordic");
  Chef c3("Thomas Keller", "French", 3);
    
  c1.Display();
  c2.Display();
  c3.Display();
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}