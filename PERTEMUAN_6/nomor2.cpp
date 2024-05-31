#include <iostream>
#include <math.h>
using namespace std;

main(){
    int i,j,k,temp;
    int baris1[3];
    int baris2[3];
    int baris3[3];

    for(i=0; i<3; i++){
        cin >> baris1[i];
    }
    for(i=0; i<3; i++){
        cin >> baris2[i];
    }
    for(i=0; i<3; i++){
        cin >> baris3[i];
    }

    for (i=0; i<2; i++){
        for (j=i+1; j<3; j++){
            if (baris1[i] < baris1[j]){
                temp = baris1[i];
                baris1[i] = baris1[j];
                baris1[j] = temp;
            }
        }
    }

    for (i=0; i<2; i++){
        for (j=i+1; j<3; j++){
            if (baris2[i] < baris2[j]){
                temp = baris2[i];
                baris2[i] = baris2[j];
                baris2[j] = temp;
            }
        }
    }

    for (i=0; i<2; i++){
        for (j=i+1; j<3; j++){
            if (baris3[i] < baris3[j]){
                temp = baris3[i];
                baris3[i] = baris3[j];
                baris3[j] = temp;
            }
        }
    }

    float hasil = sqrt(baris1[0]*baris1[0] + baris2[0]*baris2[0]+baris3[0]*baris3[0]);
    
    cout << hasil;
}