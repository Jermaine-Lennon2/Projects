// Swap Two Numbers

// Jermaine T Lennon



# include <iostream>
using namespace std;

int main(){
    
    int a, b, temp;
    
    a = 23;
    
    b = 32;
    
    cout << "Before swapping" << endl;
    cout << "a = " << a << ", b =  " << b << endl;
    
    temp = a;
    
    a = b;
    
    b = temp;
    
    cout << "After Swapping " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
