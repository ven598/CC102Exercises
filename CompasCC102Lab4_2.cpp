#include <iostream>
#include <vector>
using namespace std;

int main() {
    char decision;

    do {
            system("cls");

        vector<vector<float>> sales;

        for(int i = 0; i < 5; i++) {
            vector<float> row;
            for(int j = 0; j < 4; j++) {
                row.push_back(0);
            }
            sales.push_back(row);
        }

        int salesperson, product;
        float amount;
        char choice;

        do {
            cout << "\nSalesperson (1-4): ";
            cin >> salesperson;

            cout << "Product (1-5): ";
            cin >> product;

            cout << "Amount sold: ";
            cin >> amount;

            sales[product-1][salesperson-1] += amount;

            cout << "Add another entry? (y/n): ";
            cin >> choice;

        } while(choice == 'y' || choice == 'Y');


        cout << "\nProduct\t1\t2\t3\t4\tTotal\n";

        float grandTotal = 0;

        for(int i = 0; i < 5; i++) {
            float rowTotal = 0;
            cout << i + 1 << "\t";

            for(int j = 0; j < 4; j++) {
                cout << sales[i][j] << "\t";
                rowTotal += sales[i][j];
            }

            cout << rowTotal << endl;
            grandTotal += rowTotal;
        }

        cout << "Total\t";
        for(int j = 0; j < 4; j++) {
            float colTotal = 0;
            for(int i = 0; i < 5; i++) {
                colTotal += sales[i][j];
            }
            cout << colTotal << "\t";
        }

        cout << grandTotal << endl;

        cout << "\nD you want to repeat? (y/n): ";
        cin >> decision;

    } while(decision == 'y' || decesion == 'Y');

    return 0;
}
