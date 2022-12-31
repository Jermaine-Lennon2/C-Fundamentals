#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double x, y;
    
    // Math Functions
    
    // Max and Min

    cout << "Enter a x value: \n\n";
    cin >> x;
    
    cout << "Enter a y value: \n\n";
    cin >> y;
    
    cout << "The max value of the two numbers:  " << max(x, y) << "\n\n";
    cout << "The mininum value of the two numbers:  " << min(x,y) << "\n\n";
    
 
    
    // Square root
    
    cout << "Adding the square root of the two numbers: " << sqrt(x) + sqrt(y) << "\n\n";
    
    // Round
    
    cout << "Subracting the two round numbers: " << round(x) - round(y) << "\n\n";
    
    // Log
    
    cout << "The logitude of the x value is: " << log(x) << "\n\n";
    
    // Abosulte Value
    
    cout << "The abosolute value of y is: " << abs(x) << "\n\n";
    
    // Sin, Cosin, and Tan
    
    cout << "Cosine of x is: " << cos(x) << ". The sin of x is: " << sin(x) << ". The tan of x is " << tan(x) << "\n\n";
    
    
    
    
    
    
    return 0;
}
