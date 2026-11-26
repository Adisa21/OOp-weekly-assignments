#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName, admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, studentName);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: KSh ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;
        cout << "Enter amount to pay: KSh ";
        cin >> payment;

        if (payment <= 0)
            cout << "Enter a valid payment amount.\n";
        else if (payment > feeBalance)
            cout << "Payment is greater than the fee balance.\n";
        else {
            feeBalance -= payment;
            cout << "Payment received successfully.\n";
        }
    }

    void displayStatus() {
        cout << "\nStudent: " << studentName << '\n';
        cout << "Admission number: " << admissionNumber << '\n';
        cout << "Remaining fee balance: KSh " << feeBalance << '\n';
    }
};

int main() {
    Student student1;
    student1.inputStudent();
    student1.makePayment();
    student1.displayStatus();
    return 0;
}
