#include <iostream>
int main() {
    double eps, a = 1, b = 1, s = 0, sum = 0;
    int N = 0;
    std::cin >> eps;
    do {
        s = b * (1 / (2 * a - 1));
        a += 1;
        b *= -1;
        sum += 4*s;
        ++N;
    } while (4 * std::abs(s) >= std::abs(eps));
    std::cout << sum << " " << N <<  std::endl;
    return 0;
}