#include <iostream>
#include <cmath>
using namespace std;

int menu(){
    int n;
    cout << '\n';
    cout << "==== KALKULATOR ====" << '\n';
    cout << "1. Tambah" << '\n';
    cout << "2. Kurang" << '\n';
    cout << "3. Kali" << '\n';
    cout << "4. Bagi" << '\n';
    cout << "5. Pangkat" << '\n';
    cout << "6. Akar kuadrat" << '\n';
    cout << "7. Keluar" << '\n';
    cout << "Pilih menu (1-7): "<< '\n';

    if (!(cin >> n)) {
        cin.clear();
        cin.ignore(10000, '\n'); 
        return 0; //
    }
    return n;
}

int main() {
    int n, a, b;

    do {
    n = menu();
        switch (n){
                case 1: 
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    cout << "Masukkan nilai b: ";
                    cin >> b;
                    cout << "a + b = " << a+b << endl;
                    break; 

                case 2:
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    cout << "Masukkan nilai b: ";
                    cin >> b;
                    cout << "a - b = " << a-b << endl;
                    break;

                case 3: 
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    cout << "Masukkan nilai b: ";
                    cin >> b;
                    cout << "a x b = " << a*b << endl;
                    break;

                case 4:
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    cout << "Masukkan nilai b: ";
                    cin >> b;
                    if (b == 0){
                        cout << "b tidak valid" << endl;
                    } else {
                        cout << "a/b = " << static_cast<double>(a)/b << endl;
                    }
                    break;

                case 5:
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    cout << "Masukkan nilai b: ";
                    cin >> b;
                    cout << "a^b = " << pow(a, b) << endl;
                    break;

                case 6:
                    cout << "Masukkan nilai a: ";
                    cin >> a;
                    if (a >=0) {
                        cout << "akar a = " << sqrt(a) << endl;
                    } else {
                        cout << "a invalid" << endl;
                    }
                    break; 
                case 7:
                    break;
                default:
                    cout << "Pilih 1-7" << endl;
        }
    } while (n != 7);

    return 0;
}