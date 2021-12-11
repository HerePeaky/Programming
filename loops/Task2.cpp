#include <iostream>
int main() {
    int n;
    double sum = 1;
    double x = 1. / 2;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += x;
        x /= 2;
    }
    std::cout << sum << std::endl;
    return 0;