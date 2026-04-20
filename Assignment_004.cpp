#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ofstream outFile("color.txt");

    if (!outFile) {
        cout << "File color.txt could not be generated." << endl;
        return 1;
    }

    outFile << "Pastel Blue" << endl;
    outFile << "Navy Blue" << endl;
    outFile << "Powder Blue" << endl;
    outFile << "Dark Blue" << endl;
    outFile << "Light Blue" << endl;

    outFile.close();

    ifstream inFile("color.txt");
    ofstream targetFile("color_copy.txt");

    if (!inFile) {
        cout << "Failed to access color.txt for reading." << endl;
        return 1;
    }

    if (!targetFile) {
        cout << "Failed to create the destination file." << endl;
        inFile.close();
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        targetFile << line << endl;
    }

    inFile.close();
    targetFile.close();

    cout << "File copied successfully in color_copy.txt." << endl;

    return 0;
}
