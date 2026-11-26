#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age, score;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    cout << "\nApplicant: " << studentName << '\n';

    if (age >= 18) {
        if (score >= 50)
            cout << "Decision: Admitted\n";
        else
            cout << "Decision: Not Admitted - Low Score\n";
    } else {
        cout << "Decision: Not Admitted - Underage\n";
    }

    return 0;
}
