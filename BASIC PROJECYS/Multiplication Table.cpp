//  Multiplication Table

//  Jermaine T. Lennon


#include <iostream>
using namespace std;


int main()
{
    int y;
    int x;
    
    cout << "Enter a Postive Number: " << endl;
    cin >> y;
    
    for (x = 1;  x <= 25; ++ x)
    {
        cout << y << " * " << x << " = " << y * x << endl;
    }
    return 0;
}

