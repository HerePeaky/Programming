#include <iostream>

int main()
{
    int sum = 0, real_sum = 0;
    int const N = 20;
    //������ N = 20
    int Arr[N];
    for (int i = 0; i < N; ++i)
    {
        Arr[i] = i;
        sum += Arr[i];
    }
    //���������� ������������ ���� ��������� �������
    real_sum = N * (N + 1) / 2;
    //������� ����� �� ������� �������������� ���������� � ����� 1.
    std::cout << "Answer: " << real_sum - sum << "\n";
    //����� �������� ����� ��������� � "�������� ����� (����� ��� �����)", ��� ����� ������ "�����"
    return 0;
}