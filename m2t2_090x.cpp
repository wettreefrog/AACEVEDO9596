/*
csc 134
M2T2 - RECEIPT CALCULATOR
ALEXANDER ACEVEDO
10/01/25
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	// Declare variables
	double mealPrice = 5.99;
	double taxPercent = 0.08; // 8%
	double taxAmount;
	double total;

	// Calculate the values
	taxAmount = mealPrice * taxPercent;
	total = mealPrice + taxAmount;

	// Print the results
	cout << fixed << setprecision(2);
	cout << "\n--- Receipt ---\n";
	cout << "Meal price: $" << mealPrice << endl;
	cout << "Tax (8%): $" << taxAmount << endl;
	cout << "Total: $" << total << endl;


}