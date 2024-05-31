#include <iostream>
using namespace std;

main(){
    int i,j,n=0;
    string kalimat;
    char huruf;
    cout << "Input kalimat : "; getline(cin, kalimat);
    cout << "Input huruf : "; cin >> huruf;

    for(i=0; i<kalimat.size(); i++){
        if(kalimat[i] != huruf){
            cout << kalimat[i];
            
        }else {
            n++;
        }
    }
    cout << "\nKarakter terhapus = " << n;
}