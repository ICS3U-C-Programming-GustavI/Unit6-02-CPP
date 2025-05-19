// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program generates 10 random numbers and uses a function
// to find and return the max value using arrays.

#include <array>     // for std::array
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include <iostream>  // for input/output

// Declaring constants for array size and number range
const int MAX_ARRAY_SIZE = 10;
const int MIN_VALUE = 0;
const int RANGE = 100;

// Function to find and return the max value in the array
int findMaxValue(const std::array<int, MAX_ARRAY_SIZE>& arrayOfInt) {
    int maxVal = arrayOfInt[0];  // Start by assuming first no. = max
    for (int i = 1; i < arrayOfInt.size(); i++) {
        if (arrayOfInt[i] > maxVal) {
            maxVal = arrayOfInt[i];  // Update max if a bigger number is found
        }
    }
    return maxVal;  // Return the largest value found
}

// Main function
int main() {
    // Declare an array to store the random integers
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Seed the random number generator using the current time
    std::srand(std::time(NULL));

    std::cout << "=== Max Value Finder ===\n";
    std::cout << "Generating random numbers...\n\n";

    // Generate and store random numbers, then print each one
    for (int i = 0; i < arrayOfInt.size(); i++) {
        int randomNumber = (std::rand() % (RANGE + 1)) + MIN_VALUE;
        arrayOfInt[i] = randomNumber;
        std::cout << randomNumber << " added to the list!\n";
    }

    // Print all numbers in the array
    std::cout << "\nAll numbers added!\nList of numbers: ";
    for (int i = 0; i < arrayOfInt.size(); i++) {
        std::cout << arrayOfInt[i];
        if (i < arrayOfInt.size() - 1)
            std::cout << ", ";
    }

    // Call the function to find the maximum value in the array
    int maxValue = findMaxValue(arrayOfInt);

    // Display the result
    std::cout << "\n\nThe max value is: " << maxValue << std::endl;

    return 0;
}
