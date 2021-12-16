#include <iostream>
#include<string>
std::string toright(int number, int spaces) {
    std::string result = std::to_string(number);

    int numofds = 0;

    do {
        ++numofds;
        number /= 10;
    } while (number);

    int d = spaces - numofds;

    for (int i = 0; i < d; ++i) {
        result = " " + result;
    }

    return result;
}
void task6() {
    int n, m;
    std::cin >> n >> m;

    int** x = new int* [m];
    int* spaces = new int[m];

    for (int i = 0; i < m; ++i) {
        x[i] = new int[n];
        int max = 0;

        for (int j = 0; j < n; ++j) {
            x[i][j] = rand() % 100000;

            if (x[i][j] > max) {
                max = x[i][j];
            }
        }

        int numofds = 0;

        do {
            ++numofds;
            max /= 10;
        } while (max);

        spaces[i] = numofds;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << toright(x[j][i], spaces[j]) << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < m; ++i) {
        delete[] x[i];
    }

    delete[] x;
}
int main()
{
	std::cout << "Enter size of massive nxm = ";
	task6();
}
