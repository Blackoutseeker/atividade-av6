#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
  int kwh;
  std::cout << "Informe o consumo de Kwh: ";
  std::cin >> kwh;
  if(kwh <= 300) {
    std::cout << "\nVoce pagara: R$ 1,25\n";
  }
  else if(kwh > 300 && kwh <= 600) {
    std::cout << "\nVoce pagara: R$ 1,50\n";
  }
  else if(kwh > 600 && kwh <= 1000) {
    std::cout << "\nVoce pagara: R$ 1,75\n";
  }
  else {
    std::cout << "\nVoce pagara: R$ 2,00\n";
  }
  return 0;
}
