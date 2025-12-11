// Copyright (c) 2025 Brandon All rights reserved.
// Created by: Abdul
// Date: December 10th, 2025
// This program calculates the middle percentage
// for a given level using functions

#include <iomanip>
#include <iostream>
#include <string>

float calcMark(std::string level) {
    float percentage = -1.0;

    if (level == "4++")
        percentage = 98.0;
    else if (level == "4+")
        percentage = 95.0;
    else if (level == "4")
        percentage = 90.5;
    else if (level == "4-")
        percentage = 83.0;
    else if (level == "3+")
        percentage = 78.0;
    else if (level == "3")
        percentage = 74.5;
    else if (level == "3-")
        percentage = 71.0;
    else if (level == "2+")
        percentage = 68.0;
    else if (level == "2")
        percentage = 64.5;
    else if (level == "2-")
        percentage = 61.0;
    else if (level == "1+")
        percentage = 58.0;
    else if (level == "1")
        percentage = 54.5;
    else if (level == "1-")
        percentage = 51.0;
    else if (level == "R")
        percentage = 24.5;

    return percentage;
}

int main() {
    std::string level;
    std::cout << "Enter Your Level: ";
    std::cin >> level;

    double percentage = calcMark(level);
    if (percentage != -1.0) {
        std::cout << "The middle percentage for level " << level << " is: "
                  << std::fixed << std::setprecision(1) << percentage << "%\n";
    } else {
        std::cout << "Invalid level entered.\n";
    }
}
