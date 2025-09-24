#include <iostream>
int main() {
    int num1 = 12;
    int num2 = 13;

    if (num1 > num2) {
        std::cout << num1 << " is the greatest" << std::endl;
    } else if (num2 > num1) {
        std::cout << num2 << " is the greatest" << std::endl;
    } else {
        std::cout << "Both numbers are equal" << std::endl;
    }
    int greatest = (num1 > num2) ? num1 : num2;
    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;
}