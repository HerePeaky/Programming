#include<iostream>

int main() {
    int N;
    std::cout << "Choose size of array: ";
    std::cin >> N;
    int Arr[1000];
    std::cout << "Enter the elements of array: ";
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[Arr];
    }
    int X = N;
    std::cout << "Answer: ";
    for (int i = 1; i <= N / 2; ++i) {
        std::cout << Arr[i] << " ";
        std::cout << Arr[X] << " ";
        --X;
    }
    if (N % 2 != 0) {
        std::cout << Arr[N / 2] + 1;
    }
}