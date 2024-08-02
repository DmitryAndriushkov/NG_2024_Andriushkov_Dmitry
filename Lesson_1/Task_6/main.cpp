#include <iostream>

using namespace std;

int main(){
    int size, i, j, space;

    cout << "Hello, this program can draw an x-mas tree";
    cout << "\nEnter a size of tree: ";
    cin >> size;

    for(i = 1; i <= size; ++i){
        for(j = 1; j <= size-i; ++j){
            cout << " ";
        }
        for (j = 0; j < 2*i-1; ++j){
            cout << "*";
        }
        cout << endl;
    }

    for(space = 0; space < size-1; ++space){
       cout << " ";
    }
    cout << "*";
}
