#include <iostream>
#include <vector>

using namespace std;

int main() {
  //you must create a variable called A here
  //the size of a must be 5

  //create the array A such that it has 5 element of a pair of two integer
  //each pair is {x,x*x} and the value of the x should be from 0 to 4


  //this will printout array A
  for (int i = 0;i < 5;i++) {
    cout << i << ": {" << A[i].first << "," << A[i].second << "}" << endl;
  }
}

