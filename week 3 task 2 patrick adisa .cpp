#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string customerName;
double units, ratePerUnit, billBeforeDiscount;
double discount, finalBill;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter rate per unit: KSh ";
    cin >> ratePerUnit;
}

void calculateBill() {
    billBeforeDiscount = units * ratePerUnit;
}

void applyDiscount() {
    discount = 0;
    if (units > 100)
        discount = billBeforeDiscount * 0.10;

    finalBill = billBeforeDiscount - discount;
}

void displayBill() {
    cout << fixed << setprecision(2);
    cout << "\n========== WATER BILL ==========\n";
    cout << "Customer: " << customerName << '\n';
    cout << "Units consumed: " << units << '\n';
    cout << "Bill before discount: KSh " << billBeforeDiscount << '\n';
    cout << "Discount: KSh " << discount << '\n';
    cout << "Amount payable: KSh " << finalBill << '\n';
    cout << "================================\n";
}

int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();
    return 0;
}
