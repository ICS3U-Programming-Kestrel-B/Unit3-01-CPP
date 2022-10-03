// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 3, 2022
// This program calculates the
// tax and total of a subtotal

#include <iostream>

int main() {
    // Declaring variables
    float subtotal, tax, total;

    // Input
    std::cout << "This program calculates the\n";
    std::cout << "tax and total of a subtotal\n";
    std::cout << "\n";
    std::cout << "Enter the subtotal: $";
    std::cin >> subtotal;

    // Process
    tax = subtotal * 0.05;
    total = subtotal + tax;

    // Output
    std::cout << "Your tax is $" << tax << "\n";
    std::cout << "Your total is $" << total << "\n";
}
