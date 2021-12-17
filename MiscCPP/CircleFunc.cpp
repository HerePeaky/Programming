#include <iostream>
int circlefunc(int R) {
    int counter = 0;
    for (int x = 0; x <= R; ++x) {
        for (int y = 0; y <= R; ++y)
        {
            if ((x * x + y * y) <= R*R) {
                ++counter;
            }
        }
    }
    counter -= 1;

    return counter;
}
int main() {
    int R;
    std::cout << "R = ";
    std::cin >> R;
    std::cout << 1 + circlefunc(R) * 4 - 4 * R;
    return 0;
}
