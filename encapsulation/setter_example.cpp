/*

This program is to illustrate working of setter function. 

*/


#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line

class Phone {
  public:
    Phone(string mo, int s, int me) {
      model = mo;
      storage = s;
      megapixels = me;
    }
  
    string GetModel() {
      return model;
    }
    int GetStorage() {
      return storage;
    }
    int GetMegapixel() {
      return megapixels;
    }

  public:
    //setter

    void SetModel(string new_model) {
      model = new_model;
    }
    void SetStorage(int new_storage) {
      storage = new_storage;
    }
    void SetMegapixel(int new_megapixel) {
      megapixels = new_megapixel;
    }
  private:
    string model;
    int storage;
    int megapixels;
};

  
//add class definitions above this line


int main() {
  
  //add code below this line

  Phone my_phone("iPhone", 256, 12);
  cout<<my_phone.GetModel()<<endl;
  my_phone.SetModel("XR");
  cout<<my_phone.GetModel()<<endl;
  my_phone.SetStorage(128);
  my_phone.SetMegapixel(20);
  cout<<my_phone.GetStorage()<<endl;
  cout<<my_phone.GetMegapixel();
  
  
  //add code above this line
  
  return 0;
  
}