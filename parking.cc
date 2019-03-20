#include "library.hh"
#include <iostream>

using namespace std;

int main() {

  // Equivalence Partition (EP)

  calculateAmountPay(-1);
  calculateAmountPay(2);
  calculateAmountPay(7);
  calculateAmountPay(12);

  // Boundary Value Analysis (BVA)

  calculateAmountPay(0);
  calculateAmountPay(1);
  calculateAmountPay(5);
  calculateAmountPay(6);
  calculateAmountPay(10);
  calculateAmountPay(11);


}
