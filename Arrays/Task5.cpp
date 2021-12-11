#include<iostream>

int main() {
    int N;
    int A[1000];
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        std::cin >> i[A];
    }
    int Max = 0;
    int index = 0;
    for (int i = 1; i <= N; ++i) {
        if ((A[i] + A[i + 1]) > Max) {
            Max = A[i] + A[i + 1];
            index = i;
        }
    }
    std::cout << A[index] << " " << A[index + 1];
}