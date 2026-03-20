//PROBLEM 1 - Assignment 03 (Modified Lab Activity 06)
//Full Name: Vennice Jayne Micka Garcing Compas
//My full name is an even number, it has 30 characters

#include <iostream>
#include <string>
using namespace std;

struct student {
    int studentID;
    string name;
    string course;
    float gpa;
};

void StudsInfo(student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter Student ID: ";
        cin >> arr[i].studentID;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, arr[i].name);
        cout << "Enter Course: ";
        getline(cin, arr[i].course);
        cout << "Enter GPA (0-100): ";
        cin >> arr[i].gpa;
    }
}

void StudsAcads(student arr[], int n) {
    cout << "\nID\tName\t\tCourse\t\tGPA\tStanding\n";
    cout << "-------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        string Acads;
        if (arr[i].gpa >= 90)
            Acads = "Excellent";
        else if (arr[i].gpa >= 80)
            Acads = "Very Good";
        else if (arr[i].gpa >= 70)
            Acads = "Good";
        else if (arr[i].gpa >= 60)
            Acads = "Passing";
        else
            Acads = "Failed";

        cout << arr[i].studentID << "\t" << arr[i].name << "\t" << arr[i].course << "\t\t" << arr[i].gpa << "\t" << Acads << "\n";
    }
}

int main() {
    char choice;

    do {
        system("cls");

        int n;
        cout << "Enter number of students: ";
        cin >> n;

        student arr[n];
        StudsInfo(arr, n);
        StudsAcads(arr, n);

        cout << "\nDo you want to repeat the program again? (Y/y): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
