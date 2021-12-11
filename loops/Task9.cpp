#include <iostream>
int main() {
    int n;
    std::cout << "num = ";
    std::cin >> n;
    int num_tmp = n;
    int deg = 0;
    while ((num_tmp /= 2) != 0)
        ++deg;
    int two_deg = 1 << deg;
    while (two_deg != 0) {
        std::cout << (n / two_deg);
        n %= two_deg;
        two_deg >>= 1;
    }
    return 0;
}