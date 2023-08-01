#include <bits/stdc++.h>

void toBinary(int number) {
  int binary[32];
  int index = 0;

  if (number == 0 ) {
    std::cout <<"0"<<std::endl;
    return;
  }

  while (number > 0) {
    binary[index] = number % 2;
    number /= 2;
    index++;
  }

  for (int i = index - 1; i >= 0; i--) {
    std::cout << binary[i];
  }
  std::cout << std ::endl;
}

int main() {
  int decimalNumber;
  std::cout << "Enter a number in base 10: ";
  std::cin >> decimalNumber;

  std::cout << "Number in base 2 is: ";
  toBinary(decimalNumber);

  return 0;
}

