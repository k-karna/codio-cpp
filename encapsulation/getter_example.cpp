/*
This program is to show functioning of GETTER function
*/

#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Phone{
  public:
    Phone(string mo, int s , int me) {
      model = mo;
      storage = s;
      megapixels = me;
    }

    //having a Getter ensures inability to change private attribute, despite ability to access it
    string GetModel(){
      return model;
    }
    int GetStorage(){
      return storage;
    }
    int GetMegapixel(){
      return megapixels;
    }

  private:
    string model;
    int storage;
    int megapixels;
};

//add class definitions above this line


int main() {
  
  //add code below this line

  Phone my_phone("iPhone",256, 12);
  cout<<my_phone.GetModel()<<endl;
  cout<<my_phone.GetStorage()<<endl;
  cout<<my_phone.GetMegapixel()<<endl;

  //add code above this line
  
  return 0;
  
}