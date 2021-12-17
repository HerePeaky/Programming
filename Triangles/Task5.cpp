#include <iostream>

int main()
{
    int height, i;
    std::cout << "Height = ";
    std::cin >> height;
    for (i = 1; i <= height; ++i)
        {
            for (int j = 0; j < height - i; j++)
                std::cout << " ";
            for (int k = 0; k < i; k++)
                std::cout << "* ";
            std::cout << std::endl;
        }
    i -= 2;
    for (; i >= 0; --i)
    {
        for (int j = 0; j < height - i; ++j)
            std::cout << " ";
        for (int k = 0; k < i; ++k)
            std::cout << "* ";
        std::cout << std::endl;
    }
  
    return 0;
}
