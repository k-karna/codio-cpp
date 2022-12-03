/*

When defining and calling static functions, keep the following in mind:

    Within a class, static functions can only access other static members; for example, if level was not a static variable in the example above, ChangeLevel would not be able to access it.
    A static variable should be defined or initialized globally outside of any class or function. In other words, a static variable should not be initialized within a class or within the main function.
    Use the scope resolution operator :: as defined above to access static functions that modify static variables.


*/

#include <iostream>
using namespace std;

//add class definitions below this line

class Player {
  public:
    Player() {
      health = 100;
      score = 0;
    }
    void PrintLevel() {
      cout<<level<<endl;
    }
    static int ChangeLevel(int change) { 
      level = change;
      return level;
    }
  private:
    int health;
    int score;
    static int level; //declare static variable
};

int Player::level = 5;
//add class definitions above this line

int main() {
  
  //add code below this line

  Player mario;
  mario.PrintLevel();
  cout<<Player::ChangeLevel(6)<<endl;
  Player luigi;
  luigi.PrintLevel();

  
  //add code above this line
  
  return 0;
  
}