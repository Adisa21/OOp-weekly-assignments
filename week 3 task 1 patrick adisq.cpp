#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string employeeName;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter basic salary: KSh ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
    cout << "Enter overtime rate per hour: KSh ";
    cin >> ratePerHour;
}

void calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
}

void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

void displayPayslip() {
    cout << fixed << setprecision(2);
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << "Employee: " << employeeName << '\n';
    cout << "Basic salary: KSh " << basicSalary << '\n';
    cout << "Overtime hours: " << overtimeHours << '\n';
    cout << "Overtime pay: KSh " << overtimePay << '\n';
    cout << "Net salary: KSh " << netSalary << '\n';
    cout << "======================================\n";
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    return 0;
}
