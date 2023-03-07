/*
Nama Program  : bilangan
Deskripsi     : Menentukan apakah bilangan bulat positif, negatif, nol, atau bukan bilangan
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; // Bilangan

    // Algoritma
    printf("Bilangan    : ");

    if(scanf("%d", &i)){
        if(i > 0){
            printf("Bilangan bulat positif");
        }else if(i < 0){
            printf("Bilangan bulat negative");
        }else{
            printf("Nol");
        }
    }else{
        printf("Bukan termasuk sebuah bilangan");
    }

    return 0;
}
