/*
Nama Program  : nomorBulan
Deskripsi     : Menentukan nama bulan dengan memasukan nomor bulan
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int nomor; //Nomor Bulan

    //Algoritma
    printf("Masukan nomor bulan    : ");
    scanf("%d", &nomor);

    if(nomor >= 1 && nomor <= 12){
        if (nomor == 1){
            printf("Januari");
        }else if(nomor == 2){
            printf("Februari");
        }else if(nomor == 3){
            printf("Maret");
        }else if(nomor == 4){
            printf("April");
        }else if(nomor == 5){
            printf("Mei");
        }else if(nomor == 6){
            printf("Juni");
        }else if(nomor == 7){
            printf("Juli");
        }else if(nomor == 8){
            printf("Agustus");
        }else if(nomor == 9){
            printf("September");
        }else if(nomor == 10){
            printf("Oktober");
        }else if(nomor == 11){
            printf("November");
        }else{
            printf("Desember");
        }
    }else{
        printf("Masukan nomor bulan tidak tepat");
    }

    return 0;
}
