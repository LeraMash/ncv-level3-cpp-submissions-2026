#include <iostream>
using namespace std;

int main() {
    int passengers;
    int tripCount = 0;
    int totalPassengers = 0;
    int busiest = 0;
    const int FARE = 18;

    cout << "Mabopane to Pretoria Taxi Log" << endl;
    cout << "Enter passengers 0-15, 0 to end:" << endl;

    while (true) { // REPETITION
        cout << "Trip " << tripCount + 1 << ": ";
        cin >> passengers;

        // Input validation - wrong type
        if (!(cin >> passengers)) {
            cout << "Invalid! Enter number only." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (passengers == 0) { // SELECTION - end day
            break;
        }

        if (passengers < 0 || passengers > 15) { // SELECTION - validation
            cout << "Invalid! Must be 0-15." << endl;
            continue;
        }

        // Valid trip
        tripCount++;
        totalPassengers += passengers;

        if (passengers > busiest) {
            busiest = passengers;
        }
    }

    double income = totalPassengers * FARE;

    cout << "\n--- Day Report ---" << endl;
    cout << "Trips: " << tripCount << endl;
    cout << "Passengers: " << totalPassengers << endl;
    cout << "Income: R" << income << ".00" << endl;
    cout << "Busiest trip: " << busiest << " passengers" << endl;

    return 0;
}
