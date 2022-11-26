#include <iostream>
#include <vector>
using namespace std;

//add code below this line

vector <int> MultiplyFive(vector<int>& my_list) {
  vector<int> new_list;

  for (auto a : my_list) {
    new_list.push_back(a * 5);
  }
  return new_list;
}

int main() {
  vector<int> numbers;
  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_back(4);

vector<int> print_list = MultiplyFive(numbers);
for (auto a : print_list) {
  cout<< a << endl;
}

return 0;
}