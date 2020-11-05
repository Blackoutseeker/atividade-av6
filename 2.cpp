#include <stdlib.h>
#include <iostream>

using namespace std;

float calcular_altura(float *regras, float altura);

int main() {
  float altura;
  char sexo;
  float m[] = {72.7, 58};
  float f[] = {62.1, 44.7};
  std::cout << "Informe seu sexo: ";
  std::cin >> sexo;
  std::cout << "\nInforme sua altura: ";
  std:cin >> altura;
  switch(sexo) {
    case 'm':
      std::cout << "\nSeu peso ideal: " << calcular_altura(m, altura) << "\n";
    break;
    case 'f':
      std::cout << "\nSeu peso ideal: " << calcular_altura(f, altura) << "\n";
    break;
    default:
      std::cout << "\nOpcao invalida\n";
    break;
  }
  return 0;
}

float calcular_altura(float *regras, float altura) {
  return (regras[0] * altura) - regras[1];
}
