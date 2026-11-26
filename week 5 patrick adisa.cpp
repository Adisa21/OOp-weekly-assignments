#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    double revenue[7], totalRevenue = 0, averageRevenue;
    const string days[7] = {
        "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday", "Sunday"
    };

    // 1D array: collect revenue for each day.
    for (int i = 0; i < 7; i++) {
        cout << "Enter revenue for " << days[i] << ": KSh ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    cout << fixed << setprecision(2);
    cout << "\nWeekly revenue: KSh " << totalRevenue << '\n';
    cout << "Average daily revenue: KSh " << averageRevenue << '\n';

    // 2D array: occupancy for one branch (5 floors, 10 rooms).
    int occupancy[5][10];
    srand(static_cast<unsigned int>(time(0)));
    cout << "\nOne branch room occupancy:\n";

    for (int floor = 0; floor < 5; floor++) {
        int occupied = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
        }
        cout << "Floor " << floor + 1 << ": Occupied = " << occupied
             << ", Vacant = " << 10 - occupied << '\n';
    }

    // 3D array: three branches, five floors, ten rooms per floor.
    int chain[3][5][10];
    int totalOccupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "\nTotal occupied rooms in all branches: "
         << totalOccupied << " out of 150\n";

    return 0;
}
