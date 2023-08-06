#include <iostream>
#include <string>

void print_binary_string(std::string decimal_number) {
    int decimal_value = std::stoi(decimal_number);
    std::string binary_set = "";

    while(decimal_value > 0) {
        binary_set = std::to_string(decimal_value % 2) + binary_set;
        decimal_value /= 2;
    }

    std::cout << binary_set << std::endl;
}