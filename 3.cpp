#include <stdlib.h>
#include <iostream>

using namespace std;

int min(int a, int b, int c);

int main() {
  int num1;
  int num2;
  int num3;
  std::cout << "Informe o primeiro numero: ";
  std::cin >> num1;
  std::cout << "\nInforme o segundo numero: ";
  std::cin >> num2;
  std::cout << "\nInforme o terceiro numero: ";
  std::cin >> num3;
  std::cout << "\nO menor numero eh: " << min(num1, num2, num3) << " e a media eh: " << (num1 + num2 + num3) / 3;
  return 0;
}

int min(int a, int b, int c) {
  if(a < b && a < c) {
    return a;
  }
  else if(b < a && b < c) {
    return b;
  }
  else if(c < a && c < b) {
    return c;
  }
}
