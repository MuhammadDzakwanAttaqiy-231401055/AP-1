#include <iostream>
 
using namespace std;
int a=2,b=3;
void tukar(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
main(){
    // operasi penugasan
    // int nilai, ptr;
    // nilai = 20;
    // ptr = &nilai;
    // cout << "ptr pada alamat : " << ptr << endl;
    // cout << "isi ptr : " << ptr;

    //operasi aritmatika
    // int nilai[3]={125,345,750}, ptr;
    // ptr = &nilai[0];
    // printf("Nilai %i ada di alamat memori %p\n", ptr, ptr);
    // nilai[2] = 750;
    // ptr = &nilai[0];
    // printf("Nilai %i ada dialamat memori %d\n", ptr, ptr);
    // printf("Nilai %i ada dialamat memori %p\n", (ptr+1), ptr+1);
    // printf("Nilai %i ada dialamat memori %p\n", (ptr+2), ptr+2);
    
    cout << a << b;
    tukar(a,b);
    cout << a << b;
    
}