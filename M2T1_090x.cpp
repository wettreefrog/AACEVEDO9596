// CSC 134  
 // M2Lab1 - The Apple Orchard 
 // norris 
 // 09/21/2025 

  
 #include <iostream> 
 #include <iomanip> // for the 2 decimal places
 using namespace std; 
  
 int main() { 
    
 string first_name, last_name, full_name; // holds customer name 
 string product = "apples"; // chane to whatever you like
 int amount_purchased;
 double cost_each = 0.99;
 double total_cost;

cout << "Welcome to our " << product << " store!" << endl; 
cout << "what's your first name? "; 
cin >> first_name;
cout << "what's your last name?";
cin >> last_name;
full_name = first_name + " " + last_name;
cout << "Nice to meet you, " << first_name << endl;

cout << "How many " << product << " would you like today? ";
cin >> amount_purchased;

total_cost = amount_purchased * cost_each;

// formatting set all prices to 2 decimal places
cout << setprecision(2) << fixed;

cout << " for " << amount_purchased << " " << product << endl;
cout << "That will be: $" << total_cost << endl;
cout << "Thank you for shopping with us, " << full_name << "!" << endl;
return 0; // no errors 
}
