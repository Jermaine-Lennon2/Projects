// Sum of Natural Numbers

// Jermaine T Lennon


#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    
    cout << "Enter a postive number: " << endl;
    
    cin >> n ;
    
    for (int i = 1; i < n; ++i)
    {
        ans += i;
        
    }
    cout << "sum = " << ans << endl;
    return 0;
}
