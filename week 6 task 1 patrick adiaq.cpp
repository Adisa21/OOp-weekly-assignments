#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title, author;
    int copiesAvailable;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter available copies: ";
        cin >> copiesAvailable;
    }

    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Sorry, no copies are available.\n";
        }
    }

    void displayDetails() {
        cout << "\nBook title: " << title << '\n';
        cout << "Author: " << author << '\n';
        cout << "Copies available: " << copiesAvailable << '\n';
    }
};

int main() {
    Book book1;
    book1.inputDetails();
    book1.borrowBook();
    book1.displayDetails();
    return 0;
}
