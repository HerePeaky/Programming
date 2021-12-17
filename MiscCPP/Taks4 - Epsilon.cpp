#include <iostream>
int main()
{
    double x, eps, s = 0., pow = 1.;
    std::cout << "Enter eps: ";
    std::cin >> eps;
    std::cout << "Enter x: ";
    std::cin >> x;

    while (pow > eps)
    {
        s += pow;
        pow *= x;
    }
    std::cout << "S =  " << s << std::endl;
    std::cout << "Function = " << 1 / (1 - x) << std::endl;
    return 0;
}
