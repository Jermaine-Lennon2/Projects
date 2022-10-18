
//  Arrays

// Jermaine T Lennon



// Arrays Calculator
#include <iostream>
using namespace std;

int array1 [2];
int add();
int subtraction();
int multiply();
double divide();
double modulue();

    
int main()
{
    
    for(int i=0; i<2 ; i++)
        {
            cout << "Enter the value" << endl;
            cin >> array1[i];
     }
    
    cout << " " << endl;

    cout << array1[0] <<  " + " << array1[1] << " = " << add() << endl;
    cout << " " << endl;
    
    cout << array1[0] <<  " - " << array1[1] << " = " << subtraction() << endl;
    cout << " " << endl;

    
    cout << array1[0] <<  " * " << array1[1] << " = " << multiply() << endl;
    cout << " " << endl;


    cout << array1[0] <<  " / " << array1[1] << " = " << divide() << endl;
    cout << " " << endl;

    
    cout << array1[0] <<  " % " << array1[1] << " = " << modulue() << endl;


    
    return 0;
}



int add()
    {
    
    int sum;
    
    sum = array1[0] + array1[1];
    
    return sum;
    
    
}

int subtraction(){
    
    int difference;
    
    difference = array1[0] - array1[1];
    
    return difference;
}

int multiply(){
    
    int product;
    
    product = array1[0] * array1[1];
    
    return product;
}

double divide(){
    
    double quotient;
    
    quotient = array1[0] / array1[1];
    
    return quotient;
}

double modulue(){
    
    int reminder;
    
    reminder = array1[0] % array1[1];
    
    return reminder;
}
