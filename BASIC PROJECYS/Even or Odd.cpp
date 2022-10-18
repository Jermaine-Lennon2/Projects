// Even / Odd

// Jermaine T Lennon

#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter an integer: " << endl;
    cin >> n;
    
    if (n % 2 == 0)
        cout << n << " IS EVEM" << endl;
    else
        cout << n << " IS ODD" << endl;
    
    return 0;
}
