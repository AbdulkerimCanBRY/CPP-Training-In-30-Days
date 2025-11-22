#include <iostream>
using namespace std;
int main() {
    short int n, i, j, k;                                        //"short int" değişken türü, genellikle bellek kullanımını azaltmak için kullanılır.
    cout << "Determine the height of the Star Pyramid: ";
    cin >> n;
    for (i=1; i<=n; i++) {                                       // Dış döngü: Satır sayısını kontrol eder.
        for (j=i; j<n; j++) {                                    // İlk iç döngü: Boşlukları yazdırır.
            cout << " ";                                         // Her satırda, satır numarasına bağlı olarak boşluklar yazdırılır.
        }
        for (k=1; k<=(2*i-1); k++) {                             // İkinci iç döngü: Yıldızları yazdırır.
            cout << "*";           
        }
        cout << endl;
    }
    return 0;
}