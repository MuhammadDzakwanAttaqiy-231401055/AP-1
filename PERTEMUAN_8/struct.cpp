#include <iostream>
#include <vector>

using namespace std;

/*
Sttruct adalah sebuah jenis data yang memungkinkan pengelompokan beberapa 
variabel yang mungkin memiliki tipe data yang berbeda menjadi 
satu unit.
*/

//? Struct Declaration
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

typedef struct {
    string nama, nim;
    float nilai;
} mhs;


int main() {
    system("cls");

    //? Struct Initialization
    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        
        cin.get();
        cout << "Masukkan nama : ";
        //? Memasukkan inputan ke variabel struct menggunakan titik
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);
    }

    for(int i = 0; i < n; i++) {
        //? Menampilkan semua data pada struct
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "NIM : " << mahasiswa[i].nim << endl;
        cout << "Nilai : " << mahasiswa[i].nilai << endl;
    }

    return 0;
}