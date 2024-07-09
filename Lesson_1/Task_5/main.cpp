#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double dA, dB, dC, Discriminant, x1, x2, imaginariusNum;

    cout << "Hello, this program can solve quadratic equation by discriminant\n\nax^2 + bx + c = 0\nD = b^2 - 4ac\n";
    cout << "a = ";
    cin >> dA;
    cout << "b = ";
    cin >> dB;
    cout << "c = ";
    cin >> dC;

    Discriminant = ((pow(dB, 2) - 4 * dA *dC));

    if(Discriminant > 0) {
        x1 = (-dB + sqrt(Discriminant)) / (2 * dA);
        x2 = (-dB - sqrt(Discriminant)) / (2 * dA);
        cout << "Roots of this quadratic equation are:\n" << x1  << ", " << x2;

    }else if(Discriminant == 0) {
        x1 = -dB / (2 * dA);
        cout << "There is just one root: " << x1;

    }else if(Discriminant < 0) {
        x1 = -dB / (2 * dA);
        imaginariusNum = sqrt(-Discriminant) / (2 * dA);
        cout << "Roots of negative Discriminant are: " << x1 << " + " << imaginariusNum << "i | " << x1 << " - " << imaginariusNum << "i";

    }
}
