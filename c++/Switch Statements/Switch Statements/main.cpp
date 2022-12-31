#include <iostream>

using namespace std;

int main(){
    
    int day;
    
    cout << "Enter the day of the week: \n\n";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday \n\n";
            break;
            
        case 2:
            cout << "Tuesday \n\n";
            break;
            
        case 3:
            cout << "Wednesday \n\n";
            break;
            
        case 4:
            cout << "Thursday \n\n";
            break;
            
        case 5:
            cout << "Friday \n\n";
            break;
            
        case 6:
            cout << "Saturday \n\n";
            break;
            
        case 7:
            cout << "Sunday \n\n";
            break;
            
        default:
            break;
    }
    
    
    return 0;
}
