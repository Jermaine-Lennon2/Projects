/*
// C program to initialize the Food
// Ordering System
// Initialization
#include <iostream>
 
// Structure to store the user details
// i.e., Signup details
struct details {
    char uname[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
};
 
// Structure to store the hotels
// and their food details
struct food {
    char first_food[20];
    char second_food[20];
    char third_food[20];
    char fourth_food[25];
    int first, second, third, fourth;
};
 
// Initialize the hotels and details
struct food m[5];
struct details s[100];
 
// Function to get the input for
// a new account
void signup();
 
// Function to check whether account
// is already existed or not
void account_check();
 
// Function to validate all input fields
int validate();
void login();
void cart();
void search_by_hotels();
void search_by_food();
void food_order(int food);
 
// Function to initialize the hotels and
// food structure dynamically
void hotel_initialize();
void hotels(int hotel_choice);
 
int flag = 1, i, j = 0, count = 0, caps = 0;
int small = 0, special = 0, numbers = 0;
int success = 0, x, choice;
char temp_name[100], temp_password1[100];
char temp_password2[100], temp_email[100];
char temp_mobile[100];
 
int temp_age, total = 0, food_choice, n;
int hotel_choice, search_choice, confirm;
int ch, food, hotel_id;
*/





#include <iostream>

using namespace std;


struct Person
{
    char name[50];
    int age;
    float salary;
};

/*
 class Car {
   public:
     string brand;
     string model;
     int year;
 };

 */

class menu{
    string entree;
    string side;
public:
    
    menu();

  
};

menu::menu(){
    do{
        
        cout << "Food Choices: " << endl;
        cout << "1: Chicken:" << endl;
        cout << "2: Fish: " << endl;
        
        switch (menu):
        {
            case 1:
                cout << "User has chosen Chicken.";
            case 2:
                cout << "User has chosen Fish.";
                break;
                
            default:
                break;
        }
        while !=
    }
}
class totalPrice{
    int price;
public:
    
    totalPrice();
    
    
};

totalPrice::totalPrice(){
    
    
}
int main()
{
    Person p1;
    
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    
 
    menu();

 

    return 0;
}
