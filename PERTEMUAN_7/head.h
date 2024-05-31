#include <iostream>
using namespace std;

int tambah(int *a,int *b){
    return *a+*b;
}
int kurang(int *a,int *b){
    return *a-*b;
}
int kali(int *a,int *b){
    return *a * *b;
}
float bagi(int *a,int *b){
    return (float) *a/ *b;
}

int modulo(int *a, int *b){
    return *a%*b;
}

void garis(){
    cout <<"=======================================\n";
}
void menu(){
    cout << "1. Tambah\n";
    cout << "2. Kurang\n";
    cout << "3. Kali\n";
    cout << "4. Bagi\n";
    cout << "5. Modulo\n";
}
void bintang(){
    
    cout << "**************************************\n";
}