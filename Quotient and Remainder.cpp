// Quotient and Remainder


// Jermaine T Lennon



#include <iostream>
using namespace std;


int main (){
    
    int divisor, divident, quotient, rem;
    
    cout << " Enter your Divident: " << endl;
    
    cin >> divident;
    
    cout << " Enter your divisor: " << endl;
    
    cin >> divisor;
    
    quotient = divident / divisor;
    
    rem = divident % divisor;
    
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << rem << endl;
    
    return 0;
}
