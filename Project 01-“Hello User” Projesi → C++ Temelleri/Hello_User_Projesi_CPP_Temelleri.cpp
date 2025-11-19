#include <iostream>                        // Input-output stream kütüphanesi
using namespace std;                       // std:: yazmadan komutları (cin, cout) kullanabilmek için
int main() {                               // Ana fonksiyon, programın başlangıç noktası
    string name;                           // İsim saklamak için string türünde değişken
    cout << "Enter your name:";            // Kullanıcıdan isim girmesini isteyen mesaj
    cin >> name;                           // Kullanıcının girdiği ismi name değişkenine atama
    cout << "Hello " << name << endl;      // Kullanıcıya selam veren mesaj
    return 0;                              // Programın başarılı bir şekilde sona erdiğini belirtir
}                                          