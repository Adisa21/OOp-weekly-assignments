#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string holderName, accountNumber;
    double balance;
public:
    BankAccount(string name, string number, double amount) {
        holderName = name; accountNumber = number; balance = amount;
        cout << "Account successfully created\n";
    }
    void displayAccount() {
        cout << "Account holder: " << holderName << '\n';
        cout << "Account number: " << accountNumber << '\n';
        cout << "Account balance: KSh " << balance << '\n';
    }
    ~BankAccount() { cout << "Account closed successfully\n"; }
};
int main() {
    BankAccount account("Mary Wanjiku", "ACC1001", 25000);
    account.displayAccount();
    return 0;
}
