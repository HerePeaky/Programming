#include<iostream>
void Task3SnakeArray(int** x, int n)
{
	for (int i = 0; i < n; ++i)
	{
		x[i] = new int[n];
	}
	for (int j = 0; j < n; j+=2)
	{
		for (int i = 0; i < n; ++i)
		{
			x[i][j] = n * j + i;
		}
	}
	for (int j = 1; j < n; j += 2)
	{
		for (int i = 0; i < n; ++i)
		{
			x[i][j] = n * j +n - i-1;
		}
	}
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << x[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int n;
	std::cout << "Enter n: = ";
	std::cin >> n;
	int** answer = new int*[n];
	Task3SnakeArray(answer, n);
}
