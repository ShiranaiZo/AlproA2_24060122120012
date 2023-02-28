/*
Nama Program  : volBolaKerct
Deskripsi     : Menghitung dan menampilkan Volume Bola dan Volume Kerucut di layar
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 27-02-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    const float PHI = 3.1415; // Konstanta Phi
    float Vb; // Volume Bola
    float Vk; // Volume Kerucut
    float r; // Jari jari

    // Algoritma
    printf("Volume Bola    : ");
    scanf("%f", &Vb);

    printf("Volume Kerucut    : ");
    scanf("%f", &Vk);

    printf("Jari-jari    : ");
    scanf("%f", &r);

    Vb = (4 * (PHI * r * r * r))/3;
    Vk = Vb/2;

    printf("\nHasil Volume Bola: %.4f \n", Vb);
    printf("Hasil Volume Kerucut: %.4f \n", Vk);

    return 0;
}
