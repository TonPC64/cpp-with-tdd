#include <iostream>
#include "swap.cpp"
using namespace std;

int main() {
  int number1 = 5, number2= 10, temp;

  cout<<"Number before swapping."<<endl;
  cout<<"Number 1 = "<<number1 << ", Number 2 = "<<number2 << endl;

  swapping(number1, number2);

  cout << "Numbers after swapping." << endl;
  cout<<"Number 1 = "<<number1 << ", Number 2 = "<<number2 << endl;
  return 0;
}

