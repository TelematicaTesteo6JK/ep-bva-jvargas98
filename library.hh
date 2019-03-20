#include <iostream>

using namespace std;

int calculateAmount(int hours){
  int total;

  if (hours >= 1 && hours <= 5) {
    total = hours * 10;
  }
  else if (hours >= 6 && hours <= 10) {
    total = hours * 9;
  }
  else if (hours > 10) {
    total = hours * 7;
  }
  else{
    total = -1;
  }
  return total;
}

void calculateAmountPay(int hours) {
  if (hours > 0) {
    cout << "$" << calculateAmount(hours) << endl;
  }
  else{
    cout << "Error" << endl;
  }
}
