#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include "vec3.h"
#include <iostream>
#include <fstream>

using namespace std;
using color = vec3;

void write_color(ofstream &Image, color pixel_color, int samples_per_pixel){
    static const interval intensity(0.0, 0.999);

    double r = pixel_color.x();
    double g = pixel_color.y();
    double b = pixel_color.z();

    // Divide the color by the number of samples.
    double scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;

    int cr = static_cast<int>(256*intensity.clamp(r));
    int cg = static_cast<int>(256*intensity.clamp(g));
    int cb = static_cast<int>(256*intensity.clamp(b));

    Image << cr << ' ' << cg << ' ' << cb << '\n';
}

#endif //RAYTRACER_COLOR_H
