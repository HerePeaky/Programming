#include <iostream>

int main()
{
    setlocale(LC_ALL, "russian");
    int height;
    std::cout << "Высота равнобедренного треугольника = ";
    std::cin >> height;
    int spaces = height;
    for (int i = 1; i <= height; ++i) {
        for (int s = (spaces - 1); s >= 1; --s) {
            std::cout << " ";
        }
        --spaces;
        for (int zv = 1; zv <= (i * 2 - 1); ++zv) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
