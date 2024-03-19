#include <iostream>
using namespace std;

main(){
    int bil;
    cout << "Masukkan bilangan : "; cin >> bil;
    if (bil % 2 == 0){
        cout << bil << " adalah genap";
    }else {
        cout << bil << " adalah ganjil";
    }
}