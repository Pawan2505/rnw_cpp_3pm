#include <iostream>
using namespace std;

class TimeConverter {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    TimeConverter() : hours(0), minutes(0), seconds(0) {}

    // Method to set time from total seconds
    void setFromSeconds(int totalSeconds) {
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    // Method to convert time to total seconds
    int convertToSeconds() {
        return (hours * 3600) + (minutes * 60) + seconds;
    }

    // Method to input time in HH:MM:SS format
    void getInputForHMS() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Method to display time in HH:MM:SS format
    void displayTime() {
        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

// Main function
int main() {
    TimeConverter tc;
    int choice;
    cout << "Time Converter Menu\n";
    cout << "1. Convert seconds to HH:MM:SS\n";
    cout << "2. Convert HH:MM:SS to seconds\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int totalSeconds;
        cout << "Enter total seconds: ";
        cin >> totalSeconds;
        tc.setFromSeconds(totalSeconds);
        tc.displayTime();
    } else if (choice == 2) {
        tc.getInputForHMS();
        int totalSeconds = tc.convertToSeconds();
        cout << "Total seconds: " << totalSeconds << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
