#include<iostream>

int main() {
    int Start[3];
    int End[3];
    int Result[3];
    std::cout << "Enter start time: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> Start[i];
    }
    std::cout << "Enter end time: ";
    for (int i = 0; i < 3; ++i) {
        std::cin >> End[i];
        Result[i] = End[i] - Start[i];
    }
    for (int i = 1; i < 3; ++i) {
        if (Result[i] < 0) {
            Result[i - 1] -= 1;
            Result[i] = 60 + Result[i];
        }
    }
    std::cout << "Total time spended: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << Result[i] << " ";
    }
}