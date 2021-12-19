#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <iostream>
void genImgWithSquare()
{
	RGB background = { 255, 128, 0 };
	RgbImg img = createRgbImg(600, 600, background);
	for (size_t row = 50; row < 200; ++row)
		for (size_t col = 100; col < 400; ++col)
			img.pixels[row][col] = { 128, 255, 0 };

	writeRgbImg("out\\rainbow.bmp", img);
	deleteRgbImg(img);
}
int main() {
    try
    {
        RgbImg img = createRgbImg(100, 700);
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 0; col < 100; ++col)
            {
                img.pixels[row][col] = { 0, 0, 255 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 100; col < 200; ++col)
            {
                img.pixels[row][col] = { 0, 128 , 255 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 200; col < 300; ++col)
            {
                img.pixels[row][col] = { 0, 255 , 255 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 300; col < 400; ++col)
            {
                img.pixels[row][col] = { 0, 255 , 0 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 400; col < 500; ++col)
            {
                img.pixels[row][col] = { 255, 128 , 0 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 500; col < 600; ++col)
            {
                img.pixels[row][col] = { 255, 0 , 0 };
            }
        for (size_t row = 0; row < 100; ++row)
            for (size_t col = 600; col < 700; ++col)
            {
                img.pixels[row][col] = { 255, 0 , 128 };
            }
        writeRgbImg("Rainbow.bmp", img);
    }
    catch (std::exception const& e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return -1;
    }
    return 0;
}