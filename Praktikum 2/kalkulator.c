/*
Nama Program  : kalkulator
Deskripsi     : Menghitung bilangan A dan B berdasarkan pilihan operasi
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int iA; //Bilangan A
    int iB; //Bilangan B
    char operasi; //Pilihan operasi

    //Algoritma
    printf("Operasi   : ");
    scanf("%c", &operasi);

    printf("Bilangan A   : ");
    scanf("%d", &iA);

    printf("Bilangan B   : ");
    scanf("%d", &iB);

    if(operasi == 'a'){
        printf("Total : %d", iA + iB);
    }else if(operasi == 'b'){
        printf("Total : %d", iA - iB);
    }else if(operasi == 'c'){
        printf("Total : %d", iA * iB);
    }else if(operasi == 'd'){
        printf("Total : %f", (float)iA / (float)iB);
    }else if(operasi == 'e'){
        printf("Total : %d", iA / iB);
    }else if(operasi == 'f'){
        printf("Total : %d", iA % iB);
    }else{
        printf("Bukan pilihan menu yang benar");
    }

    return 0;
}
