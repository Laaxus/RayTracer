cmake_minimum_required(VERSION 3.26)
project(RayTracer)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(RayTracer main.cpp
        headers/vec3.h
        headers/color.h
        headers/ray.h
        headers/hittable.h
        headers/sphere.h
        headers/hittable_list.h
        headers/rtweekend.h
        headers/interval.h
        headers/camera.h)
