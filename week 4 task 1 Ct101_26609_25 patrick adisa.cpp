#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEmployee " << i << '\n';
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter basic salary: KSh ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << fixed << setprecision(2);
        cout << "Name: " << name << '\n';
        cout << "Basic salary: KSh " << basicSalary << '\n';
        cout << "Bonus: KSh " << bonus << '\n';
        cout << "Total salary: KSh " << totalSalary << '\n';
    }

    return 0;
}
