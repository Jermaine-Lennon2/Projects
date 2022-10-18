// Largest Number

// Jermaine T Lennon


#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;
    
    cout << "ENTER FIRST NUMBER: " << endl;
    cin >> num1;
    
    cout << "ENTER SECOND NUMBER: " << endl;
    cin >> num2;
    
    cout << "ENTER THIRD NUMBER: " << endl;
    cin >> num3;
    
    if (num1 >= num2 && num1 >= num3)
        cout << "LARGEST NUMBER = " << num1 << endl;
    
    if (num2 >= num1 && num2 >= num3)
        cout << "LARGEST NUMBER = " << num2 << endl;
    
    if (num3 >= num1 && num3 >= num2)
        cout << "LARGEST NUMBER = " << num3 << endl;
    
    return 0;
}
