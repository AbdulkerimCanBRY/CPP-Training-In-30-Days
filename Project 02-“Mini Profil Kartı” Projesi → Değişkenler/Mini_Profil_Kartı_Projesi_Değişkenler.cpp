#include <iostream>
using namespace std;
int main() {
    string name;
    int age;                                           // "int" tam sayı değişkeni
    double height, weight;                             // "double" ondalıklı sayı değişkeni
    cout << "Enter your name: ";
    cin >>name;
    cout << "Enter your age: ";
    cin >>age;
    cout << "Enter your height (in cm): ";
    cin >>height;
    cout << "Enter your weight (in kg): ";
    cin >>weight;
    cout << "------------------------" << endl;
    cout << "  --- Profile Card ---\n";                  // "\n" yeni satır karakteri
    cout << "------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "------------------------" << endl;
    return 0;
}