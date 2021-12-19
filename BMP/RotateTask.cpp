#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
int main() {
    const char* input = "Rainbow.bmp";
    const char* output = "Rotated_rainbow.bmp";
    int ang;
    std::cout << "Enter the angle:  "; std::cin >> ang;
    RgbImg input_image = readRgbImg(input);
    size_t height = input_image.height, width = input_image.width;
    if (ang % 90 != 0) {
        std::cout << "Invalid angle\n";
        return 0;
    }
    while (ang >= 360) {
        ang = ang - 360;
    }
    if (ang == 90)
    {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[width - 1 - row][col] = input_image.pixels[col][row];
            }
        }
        writeRgbImg(output, output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (ang == 180) {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[col][row] = input_image.pixels[height - col - 1][width - row - 1];
            }
        }
        writeRgbImg(output, output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (ang == 270) {
        RgbImg output_image = createRgbImg(width, height, { 0, 0, 0 });
        for (size_t row = 0; row < width; row++)
        {
            for (size_t col = 0; col < height; col++)
            {
                output_image.pixels[row][height - 1 - col] = input_image.pixels[col][row];
            }
        }
        writeRgbImg(output, output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    else if (ang == 0) {
        RgbImg output_image = copyRgbImg(input_image);
        writeRgbImg(output, output_image);
        deleteRgbImg(input_image);
        deleteRgbImg(output_image);
    }
    return 0;
}