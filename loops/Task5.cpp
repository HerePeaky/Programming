#include <iostream>
int main() {
    double x1, x2, dx, eps;
    std::cout << "x1 x2 dx eps: ";
    std::cin >> x1 >> x2 >> dx >> eps;
    std::cout << "x\tf(x)\t\tsin(x)\n";
    for (; x1 <= x2; x1 += dx) {
        std::cout << x1 << "\t";
        double now = x1;
        double sum = 0;
        int k = 1;
        while (std::abs(now) >= eps) {
            sum += now;
            k += 2;
            now = -now * x1 * x1 / (k * (k - 1));
        }
        std::cout << sum << "\t" << sin(x1) << "\n";
    }
    return 0;
}