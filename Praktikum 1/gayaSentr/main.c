/*
Nama Program  : gayaSentr
Deskripsi     : Menghitung dan menampilkan gaya sentripetal di layar
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 27-02-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float m; // Massa
    float v; // Kecepatan
    float r; // Jari jari
    float F; // Gaya

    // Algoritma
    printf("Massa    : ");
    scanf("%f", &m);

    printf("Kecepatan    : ");
    scanf("%f", &v);

    printf("Jari-jari    : ");
    scanf("%f", &r);

    F = m * (v * v / r);

    printf("\nHasil: %.4f \n", F);

    return 0;
}
