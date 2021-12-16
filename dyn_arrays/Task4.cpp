#include <iostream>
#include<string>
double task4(double x, double eps = 1e-6) {
    double x1 = 1., x2 = 0.;
    while (abs(x1 - x2) > eps)
    {
        x2 = x1;
        x1 = x2 - (x2 * x2 - x) / (2 * x2);
    }
    return x1;
}
int main()
{
    double n;
	std::cout << "Enter the number: = ";
	std::cin >> n;
	n = task4(n);
	std::cout << "SqrRoot of this number = " << n;
}
