#include <iostream>

using namespace std;

int main(){
    int userInput;

    cout << "Hello, this program can say some words about your salary\nPlease, enter your salary: ";
    cin >> userInput;

    if(userInput < 1000){
        cout << "Work harder! ";
    }
    if(userInput > 1000){
        if(userInput < 1000000){
            cout << "Good job! ";
        }
        if(userInput > 1000000){
            cout << "Wow you are a millionaire! ";
        }
    }
    cout << "But you're great!";
}
