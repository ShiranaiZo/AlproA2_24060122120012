/*
Nama Program  : FaktorBil
Deskripsi     : menentukan faktor bilangan yang dapat dibentuk
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; // counter
    int N; // Bilangan

    // Algoritma
    printf("Masukan Bilangan    : ");

    if (scanf("%d", &N) && N > 0)
    {
        printf("Faktor bilangannya adalah ");

        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                printf("%d", i);

                if (N != i)
                {
                    printf(", ");
                }
            }
        }
        
    }
    else{
        printf("Bilangan harus integer dan lebih dari 0");
    }

    return 0;
}
