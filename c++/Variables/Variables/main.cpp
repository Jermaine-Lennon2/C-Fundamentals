#include <iostream>
using namespace std;

int main(){

    /*
     Variables are containers used for storing data values. The different types of variables are defined with keywords such as
     
     int - used to store integers
     double - used to store decimals
     char- used to store single characters
     string- used to store text
     bool - used to store values with two states
     */
    
    // Declearing Variables
    
    // type variableName = value;
    
    int numExample = 12;
    
    double doubleExample= 151.12;
    
    char characterExample = 'a';
    
    string textExample = "Jermaine";
    
    bool boolExample = false;
    
    // Display Variables
    cout << numExample << "\n\n" << doubleExample << "\n\n" << characterExample << "\n\n" << textExample << "\n\n" << boolExample << "\n\n";
    
    // Multiple variables
    
    string myFirstName;
    int myAge;
    
    myFirstName = "Jermaine";

    myAge = 21;
    
    cout << "My name is " << myFirstName << ". My age is " << myAge << "\n\n";
    
    // Operations with Variables
    int x = 23, y = 12, sum;
    
    sum = x + y;
    
    cout << sum << "\n\n";
    
    // One Value to Multiple Variables
    
    int a, b, c;
    
    a = b = c = 35;
    
    cout << a + b + c << "\n\n";
    
    // Constants are used to declare variables and make unchangable
    
    
    // Example
    
    const int jermainesAge = 22;
    
   // jermainesAge = 12; This code wont be able to print  
    
    cout << jermainesAge << "\n\n";
    
    
    return 0;
}
