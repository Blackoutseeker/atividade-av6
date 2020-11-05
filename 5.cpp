#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
  float peso;
  float altura;
  float imc;
  const float regras[2] = {18.5, 25};
  std::cout << "Informe seu peso: ";
  std::cin >> peso;
  std::cout << "\nInforme sua altura: ";
  std::cin >> altura;
  imc = peso / (altura * altura);
  if(imc < regras[0]) {
    std::cout << "\nVoce esta abaixo do peso\n";
  }
  else if (imc >= regras[0] && imc <= regras[1]) {
    std::cout << "\nVoce esta com peso normal\n";
  }
    else {
      std::cout << "\nVoce esta acima do peso\n";
    }
  return 0;
}
