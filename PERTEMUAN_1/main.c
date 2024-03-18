#include <stdio.h>

void main(){
    int nim,a;
    char kom[100],nama[100];
    float ip;

    printf("Hello world\n");
    printf("Masukkan Nama : ");
    gets(nama);
    printf("Masukkan NIM : ");
    scanf("%d", &nim); 
    printf("Masukkan KOM : ");
    scanf("%s", &kom); 
    printf("Masukkan IP : ");
    scanf("%f", &ip); 

    printf("Nama : "); puts(nama);
    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.3f\n", ip);

}