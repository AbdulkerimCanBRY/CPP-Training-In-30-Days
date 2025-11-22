#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n <= 0) {                                                 // "while" döngüsü kullanılarak pozitif bir sayı girilene kadar kullanıcıdan giriş alınır.
        cout << "Please enter a positive integer: ";
        cin >> n;
    }
    cout << "Odd numbers from 1 to " << n << " are:" << endl;        // "for" döngüsü kullanılarak 1'den n'ye kadar olan tek sayılar yazdırılır.
    for (int i = 1; i <= n; i += 2) {                                // Tek sayılar için başlangıç değeri 1'dir ve her adımda 2 eklenir.
        cout << i << " ";
}
    cout << endl;
    cout << "Even numbers from 1 to " << n << " are:" << endl;       // "for" döngüsü kullanılarak 1'den n'ye kadar olan çift sayılar yazdırılır.
    for (int i = 2; i <= n; i += 2) {                                // Çift sayılar için başlangıç değeri 2'dir ve her adımda 2 eklenir.
        cout << i << " ";
    }
    cout << endl;
    return 0;
}