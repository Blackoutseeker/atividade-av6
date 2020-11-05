#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
  int number1;
  int number2;
  int result;
  std::cout << "Digite o primeiro numero: ";
  std::cin >> number1;
  std::cout << "\nDigite o segundo numero: ";
  std::cin >> number2;
  if(number1 > number2) {
    std::cout << "\n" << number1 << " eh maior que " << number2;
  }
  else if(number2 > number1) {
    std::cout << "\n" << number2 << " eh maior que " << number1;
  }
  else {
    std::cout << "\nAmbos os numeros sao iguais.\n\n";
  }
  return 0;
}
