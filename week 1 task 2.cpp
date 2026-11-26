#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, average;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter theory marks: ";
    cin >> theoryMarks;
    cout << "Enter practical marks: ";
    cin >> practicalMarks;

    average = (theoryMarks + practicalMarks) / 2.0;

    cout << "\nDriving Test Results\n";
    cout << "Student: " << studentName << '\n';
    cout << "Theory marks: " << theoryMarks << '\n';
    cout << "Practical marks: " << practicalMarks << '\n';
    cout << "Average: " << average << '\n';

    if (average >= 50)
        cout << "Result: Passed\n";
    else
        cout << "Result: Failed\n";

    return 0;
}
