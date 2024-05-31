#include <iostream>
using namespace std;

main(){
    int i,n,jumlah=0;

    //? Input angka
    cout << "Masukkan n : "; cin >> n;
    for (i=1; i<=n; i++){

        //? Apakah genap?
        if (i % 2 == 0){
            //? Jumlahkan dengan sebelumnya, dan kuadratkan
            jumlah += i*i;
        }
    }

    //? Tampilkan hasil
    cout << jumlah;
}