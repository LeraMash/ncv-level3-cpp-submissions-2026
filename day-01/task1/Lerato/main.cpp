#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "";
    string gender = "";

    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "Hello, " << name << endl;

    cout << "Are you male or female? M for male or F for female" << endl;
    getline(cin >> ws, gender);

    if (gender == "M" || gender == "m") {
        cout << "You are a male" << endl;
    }
    else if (gender == "F" || gender == "f") {
        cout << "You are a female" << endl;
    }
    else if (gender == "n/a" || gender == "N/A" || gender == "na") {
        cout << "Gender: N/A" << endl;
    }
    else {
        cout << "Choose gender, M for male or F for female" << endl;
    }

    return 0;
}
