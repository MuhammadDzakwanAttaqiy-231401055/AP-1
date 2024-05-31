#include <iostream>
using namespace std;

main(){
    //? Mula2 true karena nantinya kita hanya akan mengecek ketidakprimaannya
    bool prima=true;
    int n,i,j;

    //? Input angka
    cout << "Masukkan angka :"; cin >> n;

    //? Angka dibawah 2 sudah pasti tidak prima
    if (n <= 1) prima = false;

    //? Cek angka dari 2 sampa n-1, karena angka ke n sudah pasti habis dibagi n
    for (i=2; i<n; i++){

        //? Jika angka tsb habis pada interval loop, artinya bukan prima
        if (n % i == 0){
            prima = false;
            break;
        }
    }

    //? Jika prima = true, tampilkan "Prima"
    if (prima){
        cout << n << " Prima";
    }else { 
        cout << n << " Bukan Prima";
    }
}