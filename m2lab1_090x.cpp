// CSC 134  
 // M2Lab1 - The Apple Orchard 
 // norris 
 // 09/21/2025 

  
 #include <iostream> 
 using namespace std; 
  
 int main() { 
    
 string first_name, last_name, full_name; // holds customer name 
 string product = "apples"; // chane to whatever you like
 double cost_each = 0.99;
 double total_cost;

cout << "Welcome to our " << product << " store!" << endl; 
cout << "what's your first name? "; 
cin >> first_name;
cout << "what's your last name?";
cin >> last_name;
full_name = first_name + " " + last_name;
cout << "Nice to meet you, " << first_name << endl;

return 0; // no errors 
}
