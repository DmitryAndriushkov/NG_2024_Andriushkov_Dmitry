#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int  userInput;
    double num1, num2, result;

    cout << "Hello, this is calculator and its have various options: ";
    cout << "\n1)Addition\n2)Substraction\n3)Multuplication\n4)Division\n5)Find square of number\n6)Find square root of number" << endl;
    cout << "Please choose the option: ";
    cin >> userInput;

    switch(userInput) {
        case 1:
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;

            result = num1 + num2;

            cout << "Result: " << result;
            break;
        case 2:
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;

            result = num1 - num2;

            cout << "Result: " << result;
            break;
        case 3:
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;

            result = num1 * num2;

            cout << "Result: " << result;
            break;
        case 4:
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;

            result = num1 / num2;

            cout << "Result: " << result;
            break;
        case 5:
            cout << "Square of number: ";
            cin >> num1;
            result = pow(num1, 2);

            cout << "Result: " << result;
            break;
        case 6:
            cout << "Square root of number: ";
            cin >> num1;
            result = sqrt(num1);

            cout << "Result: " << result;
            break;
        default:
            cout << "Error! Please choose 1-6";
    }
}
