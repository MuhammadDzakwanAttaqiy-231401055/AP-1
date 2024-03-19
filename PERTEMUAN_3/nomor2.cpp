#include <iostream>
#include <iomanip>
using namespace std;

main(){
    int golongan, jumlahAnak, gajiPokok;
    float pajak,gaji;
    cout << "Masukkan Golongan : "; cin >> golongan;
    cout << "Masukkan jumlah anak : "; cin >> jumlahAnak;

    if (golongan == 1){
        gajiPokok = 5000000;
    }else if (golongan == 2){
        gajiPokok = 3000000;
    }else if (golongan == 3){
        gajiPokok = 2500000;
    }else {
        cout << "Anda salah input golongan ";
    }

    gaji = 0.95 * gajiPokok;
    if (jumlahAnak == 1 || jumlahAnak == 2){
        gaji += jumlahAnak*500000;
    }else {
        gaji += jumlahAnak*750000;
    }
    cout << "Gaji total : "<< fixed << setprecision(1) << gaji;
}