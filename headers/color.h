#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include "vec3.h"
#include <iostream>
#include <fstream>

using namespace std;
using color = vec3;

void write_color(ofstream &Image, color pixel_color){
    int r = static_cast<int>(255.99*pixel_color.x());
    int g = static_cast<int>(255.99*pixel_color.y());
    int b = static_cast<int>(255.99*pixel_color.z());

    Image << r << ' ' << g << ' ' << b << '\n';
}

#endif //RAYTRACER_COLOR_H
