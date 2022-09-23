// Copyright (c) 2021 Spencer Scarlett All rights reserved.
//
// Created by: Spencer Scarlett
// Created on: Sept 22, 2022
// This program calculates and displays the area
// perimeter of a circle with radius 15 mm.

#include <cmath>
#include <iostream>

int main() {
    std::cout << "A circle has a radius of 15mm:\n" << std::endl;
    std::cout << "Area = " << M_PI * pow(15, 2) << " cm^2\n" << std::endl;
    std::cout << "Perimeter = " << 2 * M_PI * 15 << " cm\n" << std::endl;
}
