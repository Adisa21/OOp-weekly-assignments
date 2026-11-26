#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter starting account balance: KSh ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nCurrent balance: KSh " << fixed << setprecision(2) << balance << '\n';
        cout << "Enter withdrawal amount (0 to stop): KSh ";
        cin >> withdrawal;

        if (withdrawal == 0) {
            cout << "Transaction stopped by customer.\n";
            break;
        }

        if (withdrawal < 0) {
            cout << "Enter a valid positive amount.\n";
            continue;
        }

        if (withdrawal > balance) {
            cout << "Withdrawal declined: insufficient balance.\n";
            break;
        }

        balance -= withdrawal;
        cout << "Withdrawal successful.\n";
        cout << "Remaining balance: KSh " << balance << '\n';
    }

    if (balance == 0)
        cout << "Your account balance is zero.\n";

    return 0;
}
