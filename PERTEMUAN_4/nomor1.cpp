#include <iostream>
using namespace std;

main(){
    int i,j,n,suku=1;
    //? Input panjang deret
    cout << "Input : "; cin >> n;

    //? Deklarasi suku pertama
    cout << suku << " ";

    //? Start dari sukur ke-2
    for(i=2; i<=n; i++){
        //? Jika urutannya genap, maka selisihnya 5
        if (i % 2 == 0){
            suku += 5;
        }else{
            suku +=3; //? Jika urutannya ganjil, maka selisihnya 3
        }

        //? Tampilkan suku
        cout << suku << " ";
    }
}