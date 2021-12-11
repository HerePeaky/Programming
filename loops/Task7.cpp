#include <iostream>
int main() {
    int n;
    std::cout << "n = ";
    std::cin >> n;
    double ans = 0.;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX, y = (double)rand() / RAND_MAX;
        ans += (x * x + y * y);
        if (ans <= 1) {
            ans += 1;
        }
    }
    std::cout << (ans / (double)n) << std::endl;
}