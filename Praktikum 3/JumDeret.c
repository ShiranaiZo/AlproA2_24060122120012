/*
Nama Program  : JumDeret
Deskripsi     : menghitung jumlah total deret bilangan
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; //  counter
    int N; // bilangan
    int jumlah = 0; // jumlah deret

    // Algoritma
    printf("Masukan Bilangan    : ");
    
    if (scanf("%d", &N) && N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            jumlah += i;
        }

        printf("Hasil: %d", jumlah);
    }
    else{
        printf("Bilangan harus integer dan lebih dari 0");
    }
    

    return 0;
}
