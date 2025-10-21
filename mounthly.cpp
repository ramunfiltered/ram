#mounthly expance calculator using c++
#include <iostream>
using namespace std;

int calculateExperienceInMonths(int startYear, int startMonth, int endYear, int endMonth) {
    // Convert both dates to total months since year 0
    int totalStartMonths = startYear * 12 + startMonth;
    int totalEndMonths = endYear * 12 + endMonth;

    // Calculate difference
    int experienceMonths = totalEndMonths - totalStartMonths;
    return experienceMonths;
}

int main() {
    int startYear, startMonth, endYear, endMonth;

    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter start month (1-12): ";
    cin >> startMonth;

    cout << "Enter end year: ";
    cin >> endYear;
    cout << "Enter end month (1-12): ";
    cin >> endMonth;

    // Input validation
    if (startMonth < 1 || startMonth > 12 || endMonth < 1 || endMonth > 12) {
        cout << "Invalid month entered. Please enter a month between 1 and 12." << endl;
        return 1;
    }

    if (endYear < startYear || (endYear == startYear && endMonth < startMonth)) {
        cout << "End date must be after start date." << endl;
        return 1;
    }

    int experience = calculateExperienceInMonths(startYear, startMonth, endYear, endMonth);

    cout << "\nTotal experience: " << experience << " month(s)" << endl;

    return 0;
}
