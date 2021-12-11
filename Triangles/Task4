#include <iostream>

int main()
{
    int height, i, numofrhombs;
    std::cout << "Height = ";
    std::cin >> height;
    std::cout << "Number of rhombs = ";
    std::cin >> numofrhombs;
    for (i = 1; i <= height; ++i) {
        for (int counter = 0; counter < numofrhombs; ++counter)
        {
            for (int k = 0; k <= height - i; k++)std::cout << " ";
            for (int j = 1; j <= i * 2 - 1; j++)std::cout << "*";
            for (int k = 0; k <= height - i; k++)std::cout << " ";
        }
            std::cout << "\n";
    }
    i -= 2;
    for (; i >= 0; --i)
        {
            for (int counter = 0; counter < numofrhombs; ++counter)
            {
                for (int k = 0; k <= height - i; ++k)std::cout << " ";
                for (int j = 1; j <= i * 2 - 1; ++j)std::cout << "*";
                for (int k = 0; k <= height - i; ++k)std::cout << " ";
            }
            std::cout << "\n";
        }
    return 0;
}
