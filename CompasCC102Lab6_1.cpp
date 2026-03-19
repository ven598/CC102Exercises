//PROBLEM 1
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

int main() {

    char choice;

    do {
           system("cls");

        int n;
        cout << "Enter number of students: ";
        cin >> n;

        student arr[n];

        for (int i = 0; i < n; i++) {
            cout << "\nStudent " << i + 1 << ":\n";

            bool exists = true;
            while (exists) {
                exists = false;
                cout << "\nEnter Student ID: ";
                cin >> arr[i].studentID;

                for (int j = 0; j < i; j++) {
                    if (arr[j].studentID == arr[i].studentID) {
                        cout << "Student ID already exists. Please enter another ID.\n";
                        exists = true;
                        break;
                    }
                }
            }

            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, arr[i].name);

            cout << "Enter Course: ";
            getline(cin, arr[i].course);

            cout << "Enter GPA (0-100): ";
            cin >> arr[i].gpa;
        }

         cout << "\nID\tName\t\tCourse\t\tGPA\tStanding\n";
         cout << "-------------------------------------------------------\n";


        for (int i = 0; i < n; i++) {
            string Acads;

            if (arr[i].gpa >= 90) {
                Acads = "Excellent";
            } else if (arr[i].gpa >= 80) {
                Acads = "Very Good";
            } else if (arr[i].gpa >= 70) {
                Acads = "Good";
            } else if (arr[i].gpa >= 60) {
                Acads = "Passing";
            } else {
                Acads = "Failed";
            }

            cout << arr[i].studentID << "\t"<< arr[i].name << "\t" << arr[i].course << "\t\t"<< arr[i].gpa << "\t" << Acads << "\n";
        }

        cout << "\nDo you want to repeat the program again? (Y/y): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
