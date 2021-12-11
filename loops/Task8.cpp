#include <iostream>

int main() {
    int n;
    std::cout << "n = ";
    std::cin >> n;
    int digit;
    int sum = 0;
    int product = 1;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    std::cout << "sum = " << sum << "\n";
    std::cout << "prod = " << product << "\n";
    return 0;
}