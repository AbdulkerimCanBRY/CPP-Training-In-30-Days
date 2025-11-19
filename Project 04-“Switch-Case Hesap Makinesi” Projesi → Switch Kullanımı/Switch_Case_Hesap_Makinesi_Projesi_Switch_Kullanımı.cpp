#include <iostream>
using namespace std;
int main() {
    double Num1, Num2;
    char operation;                                                 // "char" Tek bir karakter (harf, sayı veya sembol) tutar.
    double result = 0;
    cout << "Enter the first number: ";
    cin >> Num1;
    cout << "Enter the second number: ";
    cin >> Num2;
    cout << "Enter the operation (+, -, *, /) : ";
    cin >> operation;
    switch (operation) {                                            // "switch" if-else yapısına alternatif olarak kullanılan bir kontrol yapısıdır.
        case '+':                                                   // "case" belirli bir durumu temsil eder.
            result = Num1 + Num2;
            break;                                                  // "break" switch bloğundan çıkmayı sağlar.
        case '-':
            result = Num1 - Num2;
            break;
        case '*':
            result = Num1 * Num2;
            break;
        case '/':
            if (Num2 != 0) {
                result = Num1 / Num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; 
            }
            break;
        default:                                                    // "default" switch ifadesinde belirtilen hiçbir duruma uymayan durumlar için kullanılır.
            cout << "Error: Invalid operation!" << endl;
            return 1;                                               // Programı hata kodu ile sonlandırır.
    }

    cout << "Result: " << result << endl;
    
    return 0;
} 