#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
int main() {
    const char* input = "sinichka.bmp";
    const char* output = "GraySinichka.bmp";
    RgbImg input_image = readRgbImg(input);
    RgbImg output_image = createRgbImg(input_image.height, input_image.width, { 0, 0, 0 });
    for (size_t row = 0; row < input_image.width; row++) {
        for (size_t col = 0; col < input_image.height; col++) {
            int average = (input_image.pixels[col][row].Red + input_image.pixels[col][row].Blue + input_image.pixels[col][row].Green) / 3;
            output_image.pixels[col][row].Red = output_image.pixels[col][row].Green = output_image.pixels[col][row].Blue = average;
        }
    }
    writeRgbImg(output, output_image);
    deleteRgbImg(input_image);
    deleteRgbImg(output_image);
    return 0;
}