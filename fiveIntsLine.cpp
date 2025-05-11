// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: April 26, 2025
// This program displays all the integers 1000 till 2000 5 in a row

#include <iostream>

int main() {
    // Nested loop for all the integers up to 1995

    for (int counter = 1000; counter <= 2000; counter += 5) {
        if (counter != 1995) {
            std::cout << (counter) << " " << (counter + 1) <<
                        " " << (counter + 2) << " "
                      << (counter + 3) << " " << (counter + 4) << " " << "\n";
        }

        // Once it hits 1995 the code runs the final numbers
        if (counter == 1995) {
            std::cout << (counter) <<
                        " " << (counter + 1) << " " << (counter + 2) << " "
                      << (counter + 3) << " " << (counter + 4) << " " << "\n";
            std::cout << (counter + 5) << "\n";
            break;
        }
    }
    std::cout << "Now you know all the integers up to 2000! \n";
}
