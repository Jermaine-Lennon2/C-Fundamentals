#include <iostream>

using namespace std;

void whileLoop();
void doWhileLoop();

int main (){
    
    whileLoop();
    
    
    
    return 0;
}

void whileLoop(){
    
    int x;
    
    cout << "Enter a value for x: \n\n";
    cin >> x;
    
    while(x < 25){
        cout << x << "\n\n";
        x++;
    }
    
    
}

void doWhileLoop() {
    
}
