#include <iostream>
 
using namespace std;

main(){
    int i;
    for (i=1; i<=20; i++){
        if (i % 2 == 1) cout << i << ", alamat = " << &i << endl;
    } 
}