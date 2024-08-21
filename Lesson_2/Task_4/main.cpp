#include <iostream>
#include <string>

using namespace std;

int main(){
    string userInput;
    int counter = 0, index;

    cout << "Enter a string separated by space: ";
    getline(cin, userInput);

    for(index = 0; index < userInput.size(); ++index){
        if(userInput[index] == ' ' && userInput[index+1] != ' ') ++counter;
        }
    cout << "Values of words: " << counter + 1 << endl;
}
