#include<iostream>

void shiftArray(int* M, int n, int k) {
    for (int i = M[0]; i < n; ++i) {
        if (i < k) {
            M[n - k + i] = i;
        }
        else {
            M[i - k] = i;
        }
    }
}

int main() {
    int n, step;
    std::cin >> n >> step;
    int* x = new int [n];
    for (int i = 0; i < n; ++i) {
        x[i] = i;
    }
    shiftArray(x, n, step);
    for (int i = 0; i < n; ++i) {
        std::cout << x[i] << " ";
    }
    delete[] x;
}
