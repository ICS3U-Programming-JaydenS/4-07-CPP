// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: April 26, 2025
// This program displays all the integers 1000 till 2000 5 in a row

#include <iostream>

int main() {
    // Loop for the integers
    for (int counter = 1000; counter <= 2000; ++counter) {
        // Checks for all cases of the remainder
        if (counter % 5 == 0) {
            std::cout << counter << " ";
        } else if (counter % 5 == 1) {
            std::cout << (counter) << " ";
        } else if (counter % 5 == 2) {
            std::cout << (counter) << " ";
        } else if (counter % 5 == 3) {
            std::cout << (counter) << " ";
        } else if (counter % 5 == 4) {
            std::cout << counter << std::endl;
        }
    }
}

