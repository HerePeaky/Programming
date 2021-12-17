#include <iostream>
#include <cmath>
int main() {
    double rb, rm, x, y, xyr;
    std::cout << "BigCircleR = ";
    std::cin >> rb;
    std::cout << "SmallCircleR = ";
    std::cin >> rm;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    if (rb <= rm) {
        std::cout << "BigCircleRadius cant be < than SmallCircleRadius";
        return 1;
    }
    xyr = sqrt((x * x) + (y * y));
    if (xyr > rm and xyr < rb)
    {
        std::cout << "Condition is met";
    }
    else {
        std::cout << "Condition is not met";
    }
    return 0;

}
