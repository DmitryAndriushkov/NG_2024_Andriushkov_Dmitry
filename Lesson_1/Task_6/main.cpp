#include <iostream>

using namespace std;

int main(){
    int size, line, counter, space;

    cout << "Hello, this program can draw an x-mas tree";
    cout << "\nEnter a size of tree: ";
    cin >> size;

    for(line = 1; line <= size; ++line){
        for(counter = 1; counter <= size-line; ++counter){
            cout << " ";
        }
        for (counter = 0; counter < 2*line-1; ++counter){
            cout << "*";
        }
        cout << endl;
    }

    for(space = 0; space < size-1; ++space){
       cout << " ";
    }
    cout << "*";
}
