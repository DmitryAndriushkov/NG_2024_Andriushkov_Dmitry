#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	float bank[10] = {0,0,0,0,0,0,0,0,0,0}, sum = 0, *minVal, *maxVal;
	int userEnterAcc, userEnterOption, temp, minIndex, maxIndex;


	while(true) {
		cout << "\nEnter an account(1-10): ";
		cin >> userEnterAcc;
		cout << "Balance: " << bank[userEnterAcc - 1] << endl;
		if(userEnterAcc < 1 || userEnterAcc > 10) {
			cout << "Wrong card!" << endl;
			continue;
		}

		cout << "\nChoose an option:";
		cout << "\n1)Put money on account";
		cout << "\n2)Withdraw the money";
		cout << "\n3)Sum of all accounts";
		cout << "\n4)Max'/'min of all accounts";
		cout << "\n5)Exit\n";
		cin >> userEnterOption;

		switch(userEnterOption) {
		case 1:
			cout << "\nChoose your deposit: ";
			cin >> temp;
			if(temp < 0){
			    cout << "Error!" << endl;
			    continue;
			}
			bank[userEnterAcc-1] += temp;
			break;
        case 2:
            cout << "\nChoose your withdraw: ";
            cin >> temp;
            if(temp < 0){
			    cout << "Error!" << endl;
			    continue;
            }
            if(bank[userEnterAcc-1] - temp < 0){
                cout << "Error! Influence balance" << endl;
                continue;
            }
            bank[userEnterAcc-1] -= temp;
            break;
        case 3:
            for(int counter = 0;counter < 10; ++counter){
                sum += bank[counter];
            }
            cout << "\nSum of accounts: " << sum << endl;
            break;
        case 4:
            minVal = min_element(bank, bank+9);
            maxVal = max_element(bank, bank+9);

            minIndex = distance(bank, minVal) + 1;
            maxIndex = distance(bank, maxVal) + 1;

            cout << "Minimal balance " << minIndex << ") " << *minVal << endl;
            cout << "Maximal balance " << maxIndex << ") " << *maxVal << endl;
            break;
        case 5:
            return 0;
        default:
            cout << "\nError! Wrong option!" << endl;
            break;
		}
	}
}
