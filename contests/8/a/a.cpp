#include <iostream>

int main() {
    // Step 1: Read the value of N
    int N;
    std::cin >> N;

    // Step 2: Calculate the remainder
    int remainder = N % 5;

    // Step 3: Calculate the distance to the nearest water station
    int distance;
    if (remainder <= 2) {
        distance = N - remainder;
    } else {
        distance = N + (5 - remainder);
    }

    // Step 4: Print the distance
    std::cout << distance << std::endl;

    return 0;
}