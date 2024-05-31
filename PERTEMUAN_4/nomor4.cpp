#include <iostream>
using namespace std;

main(){
    int i,j,n;

    //? Input panjang 'o' dan 'e'
    cout << "Input n : "; cin >> n;

    //? Di soal, H hanya ada 1x
    cout << "H";

    //? Tampilkan 'o' sebanyak n kali
    for (i=1; i<=n; i++){
        cout << "o";
    }

    //? Di soal, r hanya ada 1x
    cout << "r";

    //? Tampilkan 'e' sebanyak n kali
    for (i=1; i<=n; i++){
        cout << "e";
    }

    //? Di soal, ! hanya ada 1x
    for (i=1; i<=n; i++){
        cout << "!";
    }
}