#include <iostream>

int main()
{
    int sum = 0, real_sum = 0;
    int const N = 20;
    //Возьму N = 20
    int Arr[N];
    for (int i = 0; i < N; ++i)
    {
        Arr[i] = i;
        sum += Arr[i];
    }
    //Осуществим суммирование всех элементов массива
    real_sum = N * (N + 1) / 2;
    //Находим сумму по формуле арифметической прогрессии с шагом 1.
    std::cout << "Answer: " << real_sum - sum << "\n";
    //Найду разность суммы элементов и "реальной суммы (суммы без дырки)", тем самым нахожу "дырку"
    return 0;
}