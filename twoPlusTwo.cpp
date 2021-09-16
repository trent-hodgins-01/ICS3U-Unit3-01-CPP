// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/16/21
// This program calculates the sum of two numbers
// The user enters in the numbers they wish to add

#include <iostream>

int main() {
    // this function calculates the sum of the two numbers
    int varX;
    int varY;
    int answer;

    // Input
    std::cout << "Enter the first number you would like to add (integer): ";
    std::cin >> varX;
    std::cout << "Enter the second number you would like to add (integer): ";
    std::cin >> varY;

    // process
    answer = varX + varY;

    // output
    std::cout << "" << std::endl;
    std::cout << varX << " + " << varY << " = " << answer << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
