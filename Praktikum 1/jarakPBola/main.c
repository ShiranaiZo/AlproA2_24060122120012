/*
Nama Program  : jarakPBola
Deskripsi     : Menghitung dan menampilkan jarak parabola di layar
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 27-02-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    const float g = 10; // konstanta gravitasi
    float y; // Jarak
    float v0; // Kecepatan Awal
    float t; // Waktu

    //Algoritma
    printf("Kecepatan Awal    : ");
    scanf("%f", &v0);

    printf("Waktu    : ");
    scanf("%f", &t);

    y = (v0 * t) + 0.5 * (g * t * t);

    printf("\nHasil: %.4f \n", y);

    return 0;
}
