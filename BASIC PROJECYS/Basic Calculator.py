# define the functions needed: add, sub, mul, di
# print options to the user
# ask for values
# call the functions
# while loop to continue the program until user exit

def add(a, b):
    answer = a + b
    print(str(a) + " + " + str(b) + " = " + str(answer))


def sub(a, b):
    answer = a - b
    print(str(a) + " - " + str(b) + " = " + str(answer))


def mult(a, b):
    answer = a * b
    print(str(a) + " x " + str(b) + " = " + str(answer))


def divide(a, b):
    answer = a / b
    print(str(a) + " / " + str(b) + " = " + str(answer))


while True:
    print("A. Addition")
    print("B. Subtraction")
    print("C. Multiplication")
    print("D. Division")
    print("E. Exit")

    choice = input("Enter your choice: ")

    if choice == "a" or choice == "A":
        print("Addition")
        a = int(input(" Enter first number: "))
        b = int(input(" Enter second number: "))
        add(a, b)

    elif choice == "b" or choice == "B":
        print("Subtraction")
        a = float(input(" Enter first number: "))
        b = float(input("Enter second number: "))
        sub(a, b)

    elif choice == "c" or choice == "C":
        print("Multiplication")
        a = float(input("Enter first number: "))
        b = float(input("Enter Second number: "))
        mult(a, b)

    elif choice == "d" or choice == "D":
        print("Division")
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))
        divide(a, b)

    elif choice == "e" or choice == "E":
        print("PROGRAM ENDED")
        quit()
