#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ofstream outFile("original.txt");

    if (!outFile) {
        cout << "Error: original.txt could not be created." << endl;
        return 1;
    }

    outFile << "One" << endl;
    outFile << "Two" << endl;
    outFile << "Three" << endl;
    outFile << "Four" << endl;
    outFile << "Five" << endl;
    outFile << "Six" << endl;

    outFile.close();

    // 2. Read contents into an array for sorting
    string list[6];
    ifstream inFile("original.txt");

    if (!inFile) {
        cout << "Error: original.txt not found." << endl;
        return 1;
    }

    for (int i = 0; i < 6; i++) {
        inFile >> list[i];
    }
    inFile.close();

    sort(list, list + 6);

    ofstream outSorted("sorted.txt");

    if (!outSorted) {
        cout << "Error: sorted.txt could not be created." << endl;
        return 1;
    }

    for (int i = 0; i < 6; i++) {
        outSorted << list[i] << endl;
    }

    outSorted.close();

    cout << "Files processed successfully!" << endl;

    return 0;
}
