#include <iostream>
using namespace std;

class ClassA {
  public:
    void Hello() {
      cout << "Hello from Class A" << endl;
    }
};

class ClassB : public ClassA {
  public:
    void Hello() {
      cout << "Hello from Class B" << endl;
    }
};

//add class definitions below this line

class classC : public ClassB {
  public:
    void Bonjour() {
      cout<<"Bonjour"<<endl;
    }
    void AuRevoir(){
      cout<<"Au Revoir"<<endl;
    }
    //over-riding works the same in multi-level inheritance
    void Hello(){
      cout<<"Hello from class C"<<endl;
    }
};


//add class definitions above this line

int main() {
  
  //add code below this line

  classC c;
  c.Bonjour();
  c.Hello();
  c.ClassB::Hello(); // scope resolution operator to invoke HELLO function from class Bonjour
  c.ClassA::Hello();
  c.AuRevoir();

  //add code above this line
  
  return 0;
  
}