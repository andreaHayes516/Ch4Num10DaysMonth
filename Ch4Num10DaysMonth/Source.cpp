/************************************************** 
** Author: Andrea Hayes
** Date: March 7th 2020
** Purpose: Create a program that displays the number 
            of days in a month.
** Input: Month, Year
** Processing: Enter Month and Year, Input validation for month,
               Determine Leap Year
** Output: Month, year and days in that month.
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int month, year, days;

    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 0 || month > 12) { // Only allows 1-12 to be entered
        cout << "Invalid month. Please enter number between 1-12." << endl;
    }
    cout << "Enter a year: ";
    cin >> year;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31; // Months with 31 days
    }
    else if (month != 2) {
        days = 30; // All other months except February
    }
    else if (year % 400 == 0) {  // Year is divisible by 400 making it a leap year
        days = 29;
    }
    else if (year % 100 != 0 && year % 4 == 0) { // Year is not divisible by 100 but is divisible by 4, again making it a leap year.
        days = 29;
    }
    else {      // All other years for the month of Febuary. 
        days = 28;
    }
    cout << "That month has " << days << " days" << endl;

    return 0;
}