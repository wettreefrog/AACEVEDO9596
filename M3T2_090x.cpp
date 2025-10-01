
// CSC 134 - M3T2 Random Numbers
// Craps (first roll only): 7 or 11 = win; 2, 3, 12 = lose; otherwise "point" (handled later)
// Author: Alexander Acevedo
// Date: (10/1/2025)

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "Let's roll some dice!\n";

    // 1) Seed RNG with current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // 2) Roll two dice (values 1..6)
    const int MAX = 6;
    int die1 = (std::rand() % MAX) + 1;
    int die2 = (std::rand() % MAX) + 1;

    // 3) Show results
    int total = die1 + die2;
    std::cout << "Die #1: " << die1 << "\n";
    std::cout << "Die #2: " << die2 << "\n";
    std::cout << "Total:  " << total << "\n\n";

    // 4) Decide outcome for the first roll of craps
    // 7 or 11 => immediate win
    // 2, 3, 12 => immediate loss ("craps")
    // anything else => establishes a point (we'll code that in a later module)
    if (total == 7 || total == 11) {
        std::cout << "Lucky " << total << "! You WIN on the first roll.\n";
    } else if (total == 2 || total == 3 || total == 12) {
        std::cout << "Craps (" << total << "). Sorry, you LOSE on the first roll.\n";
    } else {
        std::cout << "Your POINT is " << total << ". We'll handle the point phase later.\n";
    }

    return 0;
}
