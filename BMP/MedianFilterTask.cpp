#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
void ArrSorting(int n, int* a)
{
	int i, j, temp;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void MedianFilter()
{
	RgbImg img = readRgbImg("kidsnoise.bmp");
	const int n = 3;
	int n2 = n / 2;
	int* rm = new int[n * n];
	int* gm = new int[n * n];
	int* bm = new int[n * n];
	for (size_t row = n2; row < img.height - n2; ++row)
	{
		for (size_t col = n2; col < img.width - n2; ++col)
		{
			for (size_t i = 0; i < n; ++i)
				for (size_t j = 0; j < n; ++j)
				{
					size_t i2 = row + i - n2, j2 = col - n2 + j;
					rm[i * n + j] = img.pixels[i2][j2].Red;
					gm[i * n + j] = img.pixels[i2][j2].Green;
					bm[i * n + j] = img.pixels[i2][j2].Blue;
				}
			ArrSorting(n * n, rm);
			ArrSorting(n * n, gm);
			ArrSorting(n * n, bm);

			img.pixels[row][col].Red = rm[n * n / 2];
			img.pixels[row][col].Green = gm[n * n / 2];
			img.pixels[row][col].Blue = bm[n * n / 2];


		}
	}
	delete[] rm;
	delete[] gm;
	delete[] bm;
	writeRgbImg("kidsnoisetask5filtered.bmp", img);
	deleteRgbImg(img);
}
int main()
{
	int a[6] = { 1, 2 , 6, 5 ,13, 7 };
	ArrSorting(6, a);
	for (int i = 0; i < 6; ++i)
		std::cout << a[i];
	try
	{
		MedianFilter();
	} 
	catch (std::exception const& e)
	{
		std::cout << "Error: " << e.what() << "\n";
		return -1;
	}
	return 0;
}