
// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Function to automatically format and return current system date
string getCurrentDate() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    int day = localTime->tm_mday;
    int month = localTime->tm_mon; // 0 - 11
    int year = localTime->tm_year + 1900;

    // Suffix rules (1st, 2nd, 3rd, 4th...)
    string suffix = "th";
    if (day % 10 == 1 && day != 11) suffix = "st";
    else if (day % 10 == 2 && day != 12) suffix = "nd";
    else if (day % 10 == 3 && day != 13) suffix = "rd";

    const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    return to_string(day) + suffix + " " + months[month] + " " + to_string(year);
}

int main() {
    string firstName, lastName, studyProgram;

    // Prompt for required inputs matching the updated prompt requirements
    cout << "Enter First Name: ";
    cin >> firstName;

    cout << "Enter Last Name: ";
    cin >> lastName;

    cout << "Enter Study Program: ";
    cin.ignore(); // Clear newline buffer
    getline(cin, studyProgram);

    // Get current auto-date
    string autoDate = getCurrentDate();

    // Print acceptance letter output
    cout << "\n--------------------------------------------------\n\n";
    cout << "Date: " << autoDate << "\n\n";
    cout << "To: " << firstName << " " << lastName << ",\n\n";
    cout << "Dear " << firstName << ",\n\n";
    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University\n";
    cout << "Admissions Board has approved your application for admission to the\n";
    cout << "2027/2028 academic year.\n\n";
    cout << "You have been offered a place for the following course:\n";
    cout << "PROGRAM: " << studyProgram << "\n\n";
    cout << "As a student of Makerere University, you will be part of a historic\n";
    cout << "institution dedicated to academic excellence and innovation. Please ensure\n";
    cout << "that you report to the Academic Registrar's office with your original\n";
    cout << "academic documents for verification during the orientation week.\n\n";
    cout << "We look forward to welcoming you to the Makerere University.\n\n";
    cout << "Yours sincerely,\n\n";
    cout << "John Doe\n";
    cout << "Registra\n";
    cout << "\n--------------------------------------------------\n";

    return 0;
}