#include <iostream>
#include "head.h"
#include <iomanip>

using namespace std;
 

main(){
    int a,b,opsi;
    string pilihan;
    a:
    system("cls");
    garis();
    cout << "Selamat Datang di Program Kalkulator\n";
    garis();
    menu();
    garis();
    cout << "Masukkan operasi : "; cin >> opsi;
    cout << "Masukkan angka pertama : "; cin >> a;
    cout << "Masukkan angak kedua : "; cin >> b;
    bintang();
    if (opsi == 1){
        cout << "Hasil " << a   << " + " << b << " = " <<  tambah(&a,&b) << endl;
    }else if (opsi == 2){
        cout << "Hasil " << a << " - " << b << " = " <<  kurang(&a,&b) << endl;
    }else if (opsi == 3){
        cout << "Hasil " << a << " * " << b << " = " <<  kali(&a,&b) << endl;
    }
    else if (opsi == 4){
        cout << "Hasil " << a << " / " << b << " = " << fixed << setprecision(2) <<  bagi(&a,&b) << endl;
    }else if (opsi == 5){
        cout << "Hasil " << a << " mod " << b << " = " <<  modulo(&a,&b) << endl;
    }else {
        cout << "salah input\n";
    }

    cout << "Apakah Anda ingin melanjutkan [Y/N]"; cin >> pilihan;
    if (pilihan == "Y" || pilihan == "y"){
        goto a;
    }
}