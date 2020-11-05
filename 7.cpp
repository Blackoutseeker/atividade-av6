#include <stdlib.h>
#include <iostream>

using namespace std;

float calcular_altura(float *regras, float altura);

int main() {
  float altura;
  char sexo;
  float peso;
  float m[] = {72.7, 58};
  float f[] = {62.1, 44.7};
  float peso_ideal;
  const int diferenca_peso = 6;
  std::cout << "Informe seu sexo: ";
  std::cin >> sexo;
  std::cout << "\nInforme sua altura: ";
  std:cin >> altura;
  std::cout << "\nInforme seu peso: ";
  std::cin >> peso;
  switch(sexo) {
    case 'm':
      peso_ideal = calcular_altura(m, altura);
    break;
    case 'f':
      peso_ideal = calcular_altura(f, altura);
    break;
  }
  if(peso_ideal - peso > diferenca_peso) {
    std::cout << "\nAlerta de diferença de peso maior que 6kg\n";
  }
  else if (peso_ideal - peso < diferenca_peso) {
    std::cout << "\nEsta dentro da margem de peso\n";
  }
  else {
    std::cout << "\nPeso ideal\n";
  }
  return 0;
}

float calcular_altura(float *regras, float altura) {
  return (regras[0] * altura) - regras[1];
}
