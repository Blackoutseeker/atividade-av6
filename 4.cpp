#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
  int num1;
  int num2;
  int num3;
  int maior;
  int soma;
  std::cout << "Informe o primeiro numero: ";
  std::cin >> num1;
  std::cout << "\nInforme o segundo numero: ";
  std::cin >> num2;
  std::cout << "\nInforme o terceiro numero: ";
  std::cin >> num3;
  if(num1 > num2 && num1 > num3) {
    maior = num1;
    soma = num2 + num3;
  }
  else if(num2 > num1 && num2 > num3) {
    maior = num2;
    soma = num1 + num3;
  }
  else if(num3 > num1 && num3 > num2) {
    maior = num3;
    soma = num1 + num2;
  }
  std::cout << "\nO maior numero eh " << maior << " e a soma dos outros dois eh igual a " << soma;
  return 0;
}
