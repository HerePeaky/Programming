#include <iostream>

int main()
{
    int height, i;
    std::cout << "Height = ";
    std::cin >> height;
    for (i = 1; i <= height; ++i) {
        for (int k = 0; k <= height - i; ++k)std::cout << " ";
        for (int j = 1; j <= i * 2 - 1; ++j)std::cout << "*";
        std::cout << "\n";
    }
    i -= 2;
    for (; i >= 0; --i) {
        for (int k = 0; k <= height - i; k++)std::cout << " ";
        for (int j = 1; j <= i * 2 - 1; j++)std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}
