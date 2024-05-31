#include <iostream>
#include <math.h>
#include <cctype>

using namespace std;

//? Best Practice, deklarasi subprogram sebelum main dan isi fungsi di setelah main
//? void = procedure di pascal, tidak mengembalikan nilai
void garis();
void bintang();
void menu();

//? Parameter formal, parameter pada function diluar main
//? fuction mengembalikan data sesuai tipe data sebelum nama fungsi
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);
int pangkat(int a, int b);

int main() {
    char cont;

    //? Menampilkan kalkulator, lalu cek ulang kembali?
    do {
        system("cls");

        menu();

        int operation, a, b, hasil;
        //? Input Operasi
        cout << "Masukkan operasi : ";
        cin >> operation;

        //? Input Angka pertama
        cout << "Masukkan angka pertama : ";
        cin >> a;

        //? Input Angka kedua
        cout << "Masukkan angka kedua : ";
        cin >> b;

        //? Cek operasi yg diinput, lakukan operasi melalui function
        switch(operation) {
            case 1:
                //? Parameter Aktual, parameter fungsi pada main fungsi
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        //? Menampilkan hasil
        cout << "Hasil = " << hasil << endl;

        //? Menampilkan bintang
        bintang();

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;

    //? Mengkapitalkan variabel cont yg diinput
    } while(toupper(cont) == 'Y');

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;
    return 0;
}

//? Deklarasi subprogram diakhir

void garis() {
    cout << "====================================" << endl;
}

void bintang() {
    cout << "************************************" << endl;
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;
    garis();
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

//? Type Casting, karena int / int hasilnya akan int, sementara terdapat kemungkinan berkoma
//? Maka dilakukan type casting mengubah int ke float agar hasil akhirnya dapat berkoma
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

int modulo(int a, int b) {
    return a % b;
}

int pangkat(int a, int b) {
    //? pow dari library math.h, untuk kuadrat bilangan
    return pow(a, b);
}