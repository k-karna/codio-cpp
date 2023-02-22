/*

Get slope of a line
*/

#include <iostream>
#include <math.h>
#define M_PI  3.14159265358979323846 /* pi */
#include <vector>
using namespace std;

//add code below this line

double input1;
double input2;
double input3;
double input4;

double GetRise(double y1, double y2) {
  return y2-y1;
}

double GetRun(double x1, double x2) {
  return x2 - x1;
}

double GetSlopeDecimal(double x1, double y1, double x2, double y2) {
  return GetRise(y1, y2) / GetRun(x1, x2);
}

string GetSlopeFraction(double x1, double y1, double x2, double y2) {
  return to_string(GetRise(y1, y2)) + " / " + to_string(GetRun(x1, x2));
}

int main() {
  cout<<"Enter first x coordinate: "<<endl;
  cin>>input1;
  cout<<"Enter first y coordinate: "<<endl;
  cin>>input2;
  cout<<"Enter second x coordinate: "<<endl;
  cin>>input3;
  cout<<"Enter second y coordinate: "<<endl;
  cin>>input4;

  cout<<"Rise";
  cout<<GetRise(input2, input4)<<endl;
  cout<<"Run : ";
  cout<<GetRun(input1, input3)<<endl;
  cout<<"Calculated Form: ";
  cout<<GetSlopeDecimal(input1, input2, input3, input4)<<endl;
  cout<<"Slope Form: ";
  cout<<GetSlopeFraction(input1, input2, input3, input4)<<endl;



}