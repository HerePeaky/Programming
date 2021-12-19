#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
void KernelFilterMatrix()
{
    RgbImg img0 = readRgbImg("kidsnoise.bmp");
    RgbImg filtered0 = convolution(img0, 5);
    writeRgbImg("Prepare-kidsnoise.bmp", filtered0);
    deleteRgbImg(img0);
    deleteRgbImg(filtered0);
    RgbImg img = readRgbImg("Prepare-kidsnoise.bmp");
    size_t const kern_sz = 3;
    double** kernel = new double* [kern_sz];
    for (int i = 0; i < kern_sz; ++i)
        kernel[i] = new double[kern_sz];
    for (int i = 0; i < kern_sz; ++i)
        for (int j = 0; j < kern_sz; ++j)
        {
            std::cin >> kernel[i][j];
        }
    writeRgbImg("kids_filtered_matrixkernel.bmp", convolution(img, kern_sz, kernel));
    deleteRgbImg(img);
    delete[] kernel;
}
int main()
{
    try
    {
        KernelFilterMatrix();
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}