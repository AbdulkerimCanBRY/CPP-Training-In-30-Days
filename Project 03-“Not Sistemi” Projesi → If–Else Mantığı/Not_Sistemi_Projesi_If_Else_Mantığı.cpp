#include <iostream>
using namespace std;
int main() {
    int GradeValue;
    cout << "Enter your grade value: ";
    cin >> GradeValue;
    if (GradeValue >= 90) {                               // "if" ifadesi ile başlar
        cout << "Your letter grade is AA." << endl;
    } else if (GradeValue >= 85) {                        // "else if" ile devam eder
        cout << "Your letter grade is BA." << endl;
    } else if (GradeValue >= 80) {
        cout << "Your letter grade is BB." << endl;
    } else if (GradeValue >= 75) {
        cout << "Your letter grade is CB." << endl;
    } else if (GradeValue >= 70) {
        cout << "Your letter grade is CC." << endl;
    } else if (GradeValue >= 65) {
        cout << "Your letter grade is DC." << endl;
    } else if (GradeValue >= 60) {
        cout << "Your letter grade is DD." << endl;
    } else {                                              // "else" ile sonlanır
        cout << "Your letter grade is FF." << endl;
    } 
    return 0;
}
