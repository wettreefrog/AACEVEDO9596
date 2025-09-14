// CSC 134
// M1LAB
// Alexander Acevedo
// 09-14-25

#include <iostream>
using namespace std;
int main() {
    string name = "Jane Smith";
    int apples = 100;
    double pricePerApple = 0.25;
    double totalPrice = (double)apples * pricePerApple;
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples << " apples in stock." << endl;
    cout << "Apples are currently $" << pricePerApple << " each." << endl;
    // Final line, to print totalPrice
    cout << "If you want them all, that will be $" << totalPrice << "." << endl;
}
