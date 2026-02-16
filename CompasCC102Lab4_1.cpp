#include <iostream>
#include <vector>
using namespace std;

int main(){

  int students, quizzes;
  char decision;

  do{

    cout<< "Enter number of students: ";
    cin>> students;

    cout<< "Enter number of quizzes: ";
    cin>> quizzes;

    vector<vector<int>>scores;

    for (int i=0; i<students; i++){
        vector<int>row;
          for(int j=0; j<quizzes; j++){
            row.push_back(0);
          }
          scores.push_back(row);
    } 

        vector<float> average(students);

        // input scores
        for(int i = 0; i < students; i++) {
            cout << "\nStudent " << i + 1 << " scores:\n";
            int sum = 0;

            for(int j = 0; j < quizzes; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
                sum += scores[i][j];
            }

            average[i] = sum / (float)quizzes;
        }
        cout << "\n---------------------------------------------\n";
        cout << "\nStudent\t";
        for(int j = 0; j < quizzes; j++) {
            cout << "Q" << j + 1 << "\t";
        }
        cout << "Average\n";
        cout << "---------------------------------------------\n";

        for(int i = 0; i < students; i++) {
            cout << i + 1 << "\t";
            for(int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << "\t";
            }
            cout << average[i] << endl;
        }

        cout << "---------------------------------------------\n";
    
        cout << "\nDo you want to repeat? ('Y'/'y'): ";
        cin >> decision;

    } while(decision == 'y' || decision == 'Y');
    

    return 0;

}
