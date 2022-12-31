#include <iostream>

using namespace std;

void ifStatements();
void ifElseStatements();
void ifElseElseifStatement();

int main(){
    
    // If Statements
    ifStatements();
    
    // If Else Statements
    ifElseStatements();
    
    // If Else if Statements
    ifElseElseifStatement();
    
    
    return 0;
}

void ifStatements(){
    
    int age;
    
    cout << "Enter your age:  \n";
    cin >> age;
    
    if ( age >= 21){
        cout << "My age is: " << age << "\n\n";

    }
    
    cout << "  ";
    cout << "  ";

}

void ifElseStatements(){
    int age;
    
    cout << "Enter your age:  \n";
    cin >> age;
    
    if ( age >= 21){
        cout << "My age is: " << age << "\n\n";

    }
    else{
        cout << "Youre not old enough. \n\n";
    }
        
}

void ifElseElseifStatement(){
    int x, y, answ;
    
    cout << "Enter value for x: \n\n";
    cin >> x;
    
    cout << "Enter value for y: \n\n";
    cin >> y;
    
    answ = x + y;
    
    if (answ < 50){
        cout << "Your answer is less 50. \n\n";
    }
    else if ( answ > 50){
        cout << "Your answer is greater than 50. \n\n";
    }

    else{
        cout << "You answer is exactly 50. \n\n";
    }
}

