#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // String Concatenation - adding two strings togther
    
    string firstName, lastName, fullName;
    
    cout << "\n Enter users first name: \n";
    cin >> firstName;
    
    cout << "\n Enter users last name: \n";
    cin >> lastName;
    
    
    fullName = firstName + " " + lastName;
    
    cout << "\n" << fullName << "\n";
    
    // Append - another function to add strings together
    
    string fullNameTwo;
    
    fullNameTwo = firstName.append(lastName);
    cout << "\n" << fullNameTwo << "\n";
    
    // String length and size- both are use to get the length of string
    
    string alph;
    
    alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cout << "\n Using String.length(): \n" << alph.length();
    
    cout << "\n Using String.size(): \n" << alph.size();
    
    
    // Access Strings - access strings by referring to its index number inside []
    
    string example;
    
    example = "Hollywood";
    
    cout << "\n\n" << example[0] << "\n\n";
    
    // Getline - use to read a line of code
    
    string address;
    
    cout << "\n\n Type your address: \n";
    getline (cin, address);
    
    cout << "\n Your Address is: " << address << "\n\n";
    
    return 0;
}
