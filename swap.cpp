
void swapping(int &number1,int &number2) {
  number1 ^= number2;
  number2 ^= number1;
  number1 ^= number2;
}