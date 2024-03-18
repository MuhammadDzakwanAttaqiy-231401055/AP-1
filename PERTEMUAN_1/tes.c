#include <stdio.h>

void main(){
    int a,b,c;
    char d[100];
    printf("a : ");
    scanf("%d", &a);
    printf("d : ");
    scanf(" %[^\n]s", &d);
    printf("c : ");
    scanf("%d", &c);

    printf("a : %d\n",a);
    printf("d : %s\n",d);
    printf("c : %d\n",c);
}