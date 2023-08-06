#include <iostream>
#include <string>

extern void print_binary_string(std::string decimal_number);

int main() {
    std::string number = "56";

    print_binary_string(number);
    
    return 0;
}