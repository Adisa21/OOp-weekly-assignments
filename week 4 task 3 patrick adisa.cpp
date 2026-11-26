#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctUsername = "student";
    const string correctPassword = "pass123";
    string username, password;

    do {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword)
            cout << "Access Granted\n";
        else
            cout << "Incorrect credentials, try again\n";

    } while (username != correctUsername || password != correctPassword);

    return 0;
}
