#include <iostream>
using namespace std;

main(){
    int nilai;
    cout << "Masukkan nilai : "; cin >> nilai;
    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // } 

    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // }else {
    //     cout << "anda lulus" <<endl;
    // }


    // if (nilai == 100){
    //     cout << "Kamu hebat" << endl;
    // }else if (nilai <= 65) {
    //     cout << "anda tidak lulus" <<endl;
    // }else {
    //     cout << "anda lulus" << endl;
    // }
    // switch (nilai) {
    //     case 85 ... 100: cout <<"A" << endl; break;
    //     case 80 ... 84: cout <<"B" << endl; break;
    //     case 75 ... 79: cout <<"C" << endl; break;
    //     case 70 ... 74: cout <<"D" << endl; break;
    //     case 65 ... 69: cout <<"E" << endl; break;
    //     case 60 ... 64: cout <<"F" << endl; break;
    //     default: cout << "salah input " << endl;
        
    // }

    string cekNum = (nilai % 2 == 0) ? "genap" : "ganjil";
    cout << cekNum << endl;
}