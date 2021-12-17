#include <iostream>

int main()
{
    int height, i, numofrhombs;
    std::cout << "Height/2 = ";
    std::cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < 2 * height + 1; j++)
        {
            if (j == height - i || j == height + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = height; i >= 0; i--)
    {
        for (int j = 0; j < 2 * height + 1; j++)
        {
            if (j == height - i || j == height + i)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
