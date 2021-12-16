#include<iostream>

void Task3SnakeArray(int** M, int n, bool d) {
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == d) {
            for (int j = 0; j < n; ++j) {
                ++k;
                M[i][j] = k;
           }
        }
        else {
            for (int j = n - 1; j >= 0; --j) {
                ++k;
                M[i][j] = k;
            }
        }
    }
}

int main() {
    int n;
    bool d;
    std::cout << "Enter n: = ";
    std::cin >> n;
    std::cout << "Enter direction of filling ( 0 is >>>, 1 is <<<): ";
    std::cin >> d;
    int** x = new int*[n];
    for (int i = 0; i < n; ++i) {
        x[i] = new int[n];
    }
    Task3SnakeArray(x, n, d);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << x[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < n; ++i) {
        delete[] x[i];
    }
    delete[] x;
}
