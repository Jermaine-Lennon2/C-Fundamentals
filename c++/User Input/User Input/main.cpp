#include <iostream>

using namespace std;

int main(){
    
    // cout is used to output values and cin is uded to input values from user
    
    // cin is a predefined variable that reads data from the keyboard with the extraction operator >>
    
    // Example
    
    int x;
    
    cout << "Enter value for x: \n";
    cin >> x;
    
    cout << "The number you enter was: " << x << "\n\n";
    
    // Basic Calculation
    
    int n, i, sum, product, difference;
    float quotient;
    string operation;
    
    cout << " Enter two numbers: \n\n";
    cin >> n;
    cin >> i;
    
    cout << "Enter operation: \n\n";
    cin >> operation;
    
    if (operation == "add"){
        cout << n + i << "\n\n";
    }
    else if (operation == "subtract"){
        cout << n - i << "\n\n";
    }
    else if (operation == "multiple"){
        cout << n * i << "\n\n";
    }
    else if (operation == "divide"){
        cout << n / i << "\n\n";
    }
    else
        cout << "Error ";
    
    
    
    return 0;
}
