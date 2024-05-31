#include <iostream>
 
using namespace std;

main(){
    char prodi[]= "KOMPUTER";
    char *ptr;
    ptr = &prodi[4];
    cout << *ptr;
}