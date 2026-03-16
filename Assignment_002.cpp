#include <iostream>
using namespace std;

void Grades(int* grades, int studs, int subs) {
    cout << "\nGrades: " << endl;
    for (int i = 0; i < studs; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < subs; j++) {
            cout << *(grades + i * subs + j) << " ";
        }
        cout << endl;
    }
}

void Averages(int* grades, int studs, int subs) {
    cout << "\nAverage per Student: " << endl;
    for (int i = 0; i < studs; i++) {
        float sum = 0;
        for (int j = 0; j < subs; j++) {
            sum = sum + *(grades + i * subs + j);
        }
        float ave = sum / subs;
        cout << "Student " << i + 1 << ": " << ave << endl;
    }
}

void Highest(int* grades, int studs, int subs) {
    int highest = *(grades);
    for (int i = 0; i < studs; i++) {
        for (int j = 0; j < subs; j++) {
            if (*(grades + i * subs + j) > highest) {
                highest = *(grades + i * subs + j);
            }
        }
    }
    cout << "\nHighest Grade:" << endl;
    cout << "Highest Grade is: " << highest << endl;
}

int main() {
    int studs, subs;

    cout << "Enter number of students: ";
    cin >> studs;

    cout << "Enter number of subjects: ";
    cin >> subs;

    int grades[studs][subs];

    cout << "\nEnter grades:\n";
    for (int i = 0; i < studs; i++) {
        for (int j = 0; j < subs; j++) {
            cout << "Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    Grades(&grades[0][0], studs, subs);
    Averages(&grades[0][0], studs, subs);
    Highest(&grades[0][0], studs, subs);

    return 0;
}
