#include <iostream>
using namespace std;

main(){
    int r;
    float v,l;
    const float phi = 3.14;
    cout << "Masukkan jari - jari = "; cin >> r;

    v = 4/3 * phi *r*r*r;
    l = 4*phi*r*r;
    cout << "luas = " << l << endl;
    cout << "volume = " << v ;

}