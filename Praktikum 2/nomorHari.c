/*
Nama Program  : nomorHari
Deskripsi     : Menentukan nama hari dengan memasukan nomor hari
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int nomor; // nomor hari

    // Algoritma
    printf("Masukan nomor hari    : ");
    scanf("%d", &nomor);

    if(nomor >= 1 && nomor <= 7){
        if (nomor == 1){
            printf("Senin");
        }else if(nomor == 2){
            printf("Selasa");
        }else if(nomor == 3){
            printf("Rabu");
        }else if(nomor == 4){
            printf("Kamis");
        }else if(nomor == 5){
            printf("Jum'at");
        }else if(nomor == 6){
            printf("Sabtu");
        }else{
            printf("Minggu");
        }
    }else{
        printf("Masukan nomor hari tidak tepat");
    }

    return 0;
}
