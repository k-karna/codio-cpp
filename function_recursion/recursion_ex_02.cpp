/*

Recursion Exercise 2
Problem
Write a recursive function called ListSum() that takes a vector of integers as a parameter. 
Then it returns the sum of all of the integers in the array.

Expected Output

    If the ListSum() function is called with the vector elements of {1, 2, 3, 4, 5} then it will return 15.
    If the ListSum() function is called with the vector elements of {10, 12, 10, 7} then it will return 39.

*/

#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line
int sum = 0;
int ListSum(vector<int> nums) {
  for (int i = 0; i < nums.size(); i++) {
    if ((nums.size() == 1) && (nums[0] ==0)) {
      return 0;
    }
    else {
      sum = sum + nums[i];
    }
  }
  return sum;
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
