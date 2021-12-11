#include <iostream>
#include <cmath>
int main() {
    double x1, x2, a, b, c, D;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        x1 = (-b - sqrt(D)) / 2 * a;
        x2 = (-b + sqrt(D)) / 2 * a;
        std::cout << "Answer: x1 =  " << x1 << ", x2 = " << x2 << "\n";
    }else if (D == 0)
    {
        x1 = (-b) / 2 * a;
        std::cout << "Only one answer: x1 =" << x1;
    } else {
        std::cout << "There is no answers.\n";
            }
    return 0;
}
