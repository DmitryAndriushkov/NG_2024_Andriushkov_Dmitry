#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	float bank[10] = {0,0,0,0,0,0,0,0,0,0}, sum = 0;
	int userEnterAcc, userEnterOption, temp;


	while(true) {
		cout << "Enter an account(1-10): ";
		cin >> userEnterAcc;
		if(userEnterAcc < 1 || userEnterAcc > 10) {
			cout << "Wrong card!" << endl;
			continue;
		}

		cout << "\nChoose an option:";
		cout << "\n1)Put money on account";
		cout << "\n2)Withdraw the money";
		cout << "\n3)Sum of all accounts";
		cout << "\n4)Max'/'min of all accounts\n";
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
            cout << "\nChoose your withdraw: \n";
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
            for(int i = 0;i < 10; ++i){
                sum += bank[i];
            }
            cout << "\nSum of accounts: " << sum << endl;
            break;
        case 4:
            cout << "\nMinimal amount of accounts: " << *min_element(bank, bank+9) << endl;
            cout << "Maximal amount of accounts: " << *max_element(bank, bank+9) << endl;
        default:
            cout << "\nError! Wrong option!" << endl;
            break;
		}
	}
}
