#include <iostream>
#include <string>
using namespace std;
class RoomBooking {
private:
    string guestName;
    int roomNumber, daysBooked;
public:
    RoomBooking(string name, int room, int days) {
        guestName = name; roomNumber = room; daysBooked = days;
        cout << "Room booking confirmed\n";
    }
    void displayBooking() {
        cout << "Guest name: " << guestName << '\n';
        cout << "Room number: " << roomNumber << '\n';
        cout << "Days booked: " << daysBooked << '\n';
    }
    ~RoomBooking() { cout << "Booking ended, room released\n"; }
};
int main() {
    RoomBooking booking("Peter Mwangi", 12, 3);
    booking.displayBooking();
    return 0;
}
