#include <iostream>
using namespace std;

main(){
    int tahun,interval,i,n,j;
    //? Input Tahun dan Interval
    cout << "Masukkan tahun : "; cin >> tahun;
    cout << "Masukkan interval : "; cin >> interval;

    //? Jika intervalnya kedepan
    if (interval >= 0){

        //? Loop dari tahun saat ini sampai ke tahun interval
        for (i=tahun; i<=tahun+interval; i++){

            //?harus habis dibagi 4 dan pada abad baru, haru habis dibagi 400 atau, bukan abad baru
            if ((i % 4 == 0) && ((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0))){
                cout << i << " kabisat\n";
            }else {
                cout << i << " bukan kabisat\n";
            }
        }
    }else {

        //? Loop dari tahun saat ini sampai ke tahun interval
        for (i=tahun; i>=tahun+interval; i--){
            
            //?harus habis dibagi 4 dan pada abad baru, haru habis dibagi 400 atau, bukan abad baru
            if ((i % 4 == 0) && ((i % 100 == 0 && i % 400 == 0) || (i % 100 != 0))){
                cout << i << " kabisat\n";
            }else {
                cout << i << " bukan kabisat\n";
            }
        }
    }
}