#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char userInput;
    double num1, num2;

    cout << "Hello, this is calculator and its have various options: ";
    cout << "\n1)Addition\n2)Substraction\n3)Multuplication\n4)Division\n5)Exponentiation\n6)Find square root of number" << endl;
    cout << "Please choose the option: ";
    cin >> userInput;

    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    switch(userInput) {
        case '1':
            cout << "Result: " << num1 + num2;
            break;

        case '2':
            cout << "Result: " << num1 - num2;
            break;

        case '3':
            cout << "Result: " << num1 * num2;
            break;

        case '4':
            cout << "Result: " << num1 / num2;
            break;

        case '5':
            cout << "Result: " << pow(num1, num2);
            break;

        case '6':
            cout << "Result: " << pow(num1, 1.0/num2);
            break;

        default:
            cout << "Error! Please choose 1-6";
    }
}
