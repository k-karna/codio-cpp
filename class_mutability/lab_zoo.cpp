/*
Your task is to add the following class functions to the class:

    TotalAnimals - returns the total number of animals
    TotalMammals - returns the number of mammals (which includes big_cats and primates)
    MostAnimals - returns the name of the animal with the most count assuming no two animals have the same count


*/

#include <iostream>
using namespace std;

//add class definitions below this line

class Zoo {
  public:
    Zoo(int bc, int p, int r, int b) {
      big_cats = bc;
      primates = p;
      reptiles = r;
      birds = b;
    }
    int TotalAnimals() {
      return birds + big_cats + primates + reptiles;
    }
    int TotalMammals() {
      return big_cats + primates;
    }
    string MostAnimals() {
      int max = big_cats;
      string most_animal = "big cats";
      if (primates > max) {
        max = primates;
        most_animal = "primates";
      }
      if (reptiles > max) {
        max = reptiles;
        most_animal = "reptiles";
      }
      if (birds > max) {
        max = birds;
        most_animal = "birds";
      }
      return most_animal;
    }
  
  private:
    int big_cats;
    int primates;
    int reptiles;
    int birds;
};

//add class definitions above this line  

int main() {
  
  //DO NOT EDIT code below this line

  Zoo my_zoo(10, 30, 90, 120);
  cout << my_zoo.TotalAnimals() << endl;
  cout << my_zoo.TotalMammals() << endl;
  cout << my_zoo.MostAnimals() << endl;
  Zoo my_zoo2(123, 45, 67, 89);
  cout << my_zoo2.TotalAnimals() << endl;
  cout << my_zoo2.TotalMammals() << endl;
  cout << my_zoo2.MostAnimals() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
