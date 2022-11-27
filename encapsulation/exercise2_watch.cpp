/*
Exercise 2
Create the Watch class following the conventions of encapsulation.
Requirements

    Create a Watch class with the following attributes:
        manufacturer - string that represents who makes the watch
        model - string that represents the specific watch
        diameter - integer that represents (in millimeters) the diameter of the watch
        water_resistance - integer that represents (in meters) the water resistance of the watch
        material - string that represents what the watch is made of
        
    Include all necessary getter and setter functions for each attribute (10 total)
    Create a class function called Summary that prints all of the attributes of the class (see expected output below)
    Include BOTH the public as well as the private access modifiers in your class

*/




#include <iostream>
using namespace std;

//add class definitions below this line
class Watch {
  public:
    Watch(string mn, string mo, int d, int w, string ma){
      manufacturer = mn;
      model = mo;
      diameter = d;
      water_resistance = w;
      material = ma;
    }
    void Summary(){
      cout<<"Maufacturer: "<<manufacturer<<endl;
      cout<<"Model: "<<model<<endl;
      cout<<"Diameter: "<<diameter<<" mm"<<endl;
      cout<<"Water Resistance: "<<water_resistance<<" m"<<endl;
      cout<<"Material: "<<material<<endl;
    }

    string GetManufacturer(){
      return manufacturer;
    }
    string GetModel() {
      return model;
    }
    int GetDiameter(){
      return diameter;
    }
    int GetWaterResistance(){
      return water_resistance;
    }
    string GetMaterial(){
      return material;
    }

    void SetManufacturer(string new_man){
      manufacturer = new_man;
    }
    void SetModel(string new_model){
      model = new_model;
    }
    void SetDiameter(int new_d){
      diameter = new_d;
    }
    void SetWaterResistance(int new_w){
      water_resistance = new_w;
    }
    void SetMaterial(string new_material){
      material = new_material;
    }



  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}