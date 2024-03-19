#include <iostream>
#include <iomanip>
using namespace std;

main(){
    string hasil;
    float berat, tinggi,bmi;
    cout << "Masukkan berat badan anda (kg) : "; cin >> berat;
    cout << "Masukkan tingi anda (m) : "; cin >> tinggi;
    bmi = berat/(tinggi*tinggi);
    if (bmi < 18.5 ){
        hasil = "kurang";
    }else if (bmi >= 18.5 && bmi < 25){
        hasil = "normal";
    }else if (bmi >= 25 && bmi <30){
        hasil = "berlebih";
    }else {
        cout << "Bmi anda : " << bmi << endl;
        cout << "Kategori berat badan : Obesitas";
        exit(0);
    }
    cout << "Bmi anda : "<< fixed << setprecision(2)<< bmi << endl;
    cout << "Kategori berat badan : " << hasil;

}