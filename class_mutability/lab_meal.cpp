/*
Printing the meal program
*/

#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Meal {
  public:
    void AddDrink(string drink) {
      drinks.push_back(drink);
    }
    void PrintDrinks() {
      if (drinks.size() == 0) {
        cout<<"Drinks: None"<<endl;
      }
      else if (drinks.size() == 1) {
        cout<<"Drinks: "<<drinks.at(0)<<endl;
      }
      else if (drinks.size() == 2) {
        cout<<"Drinks: "<<drinks.at(0)<<" and "<<drinks.at(1)<<endl;
      }
      else {
        cout<<"Drinks: ";
        for (int i = 0; i < drinks.size() -1;i++) {
          cout<<drinks.at(i)<<",";
        }
        cout<<" and  "<<drinks.at(drinks.size() -1)<<endl;
      }
    }
    void AddAppetizer(string appetizer) {
      appetizers.push_back(appetizer);
    }
    void PrintAppetizer() {
      for (auto a: appetizers) {
        cout<<a<<endl;
      }
    }
    void AddMaincourse(string mc) {
      main_courses.push_back(mc);
    }
    void PrintMaincourse() {
      for (auto a: main_courses) {
        cout<<a<<endl;
      }
    }
    void AddDessert(string dessert) {
      desserts.push_back(dessert);
    }
    void PrintDessert() {
      for (auto a: desserts) {
        cout<<a<<endl;
      }
    }

  private:
    vector<string> drinks;
    vector<string> appetizers;
    vector<string> main_courses;
    vector<string> desserts;
};


//add class definitions above this line     

int main() {
  
  //add code below this line

  Meal dinner;
  dinner.PrintDrinks();
  dinner.AddDrink("water");
  dinner.PrintDrinks();
  dinner.AddDrink("lemonade");
  dinner.PrintDrinks();
  dinner.AddDrink("tea");
  dinner.PrintDrinks();
  dinner.AddDrink("coffee");
  dinner.PrintDrinks();
  dinner.AddAppetizer("bruschetta");
  dinner.PrintAppetizer();
  dinner.AddMaincourse("roast chicken");
  dinner.PrintMaincourse();
  dinner.AddDessert("chocolate cake");
  dinner.PrintDessert();

  //add code above this line
  
  return 0;
  
}
