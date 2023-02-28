/*
Nama Program  : luasKellLayang
Deskripsi     : Menghitung dan menampilkan Luas dan Keliling Layang-layang di layar
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 27-02-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float d1; // Diagonal satu Layang-layang
    float d2; // Diagonal dua Layang-layang
    float Luas; //Luas Layang-layang
    int s1; // Sisi satu Layang-layang
    int s2; // Sisi dua Layang-layang
    int Kell; // Keliling Layang-layang

    // Algoritma
    printf("Diagonal 1    : ");
    scanf("%f", &d1);

    printf("Diagonal 2    : ");
    scanf("%f", &d2);

    printf("Sisi 1    : ");
    scanf("%d", &s1);

    printf("Sisi 2    : ");
    scanf("%d", &s2);

    Luas = d1 * d2 / 2;
    Kell = 2 * (s1 + s2);

    printf("\nHasil Luas Layang-Layang: %.4f \n", Luas);
    printf("Hasil Keliling Layang-Layang: %d \n", Kell);

    return 0;
}
