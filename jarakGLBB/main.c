/*
Nama Program  : jarakGLBB
Deskripsi     : Menghitung dan menampilkan jarak GLBB di layar
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 27-02-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float S; // Jarak
    float v0; // Kecepatan Awal
    float t; // Waktu
    float a; // Percepatan

    //Algoritma
    printf("Kecepatan Awal    : ");
    scanf("%f", &v0);

    printf("Waktu    : ");
    scanf("%f", &t);

    printf("Percepatan    : ");
    scanf("%f", &a);

    S = (v0 * t) + 0.5 * (a * t * t);

    printf("\nHasil: %.4f \n", S);

    return 0;
}

