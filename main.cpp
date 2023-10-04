#include <iostream>
#include <fstream>
#include "color.h"
#include "vec3.h"

using namespace std;

int main() {

    ofstream Image("image.ppm");

    // Image

    int image_width = 256;
    int image_height = 256;

    // Render

    Image << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        clog << "\rScanlines remaining: " << (image_height - j) << ' ' << flush;
        for (int i = 0; i < image_width; ++i) {
            double r = double(i) / (image_width-1);
            double g = double(j) / (image_height-1);
            double b = 0;
            color pixel_color(r,g,b);
            write_color(Image,pixel_color);
        }
    }

    Image.close();
}