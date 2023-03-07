/*
Nama Program  : BilPrimaN
Deskripsi     : Mencetak bilangan prima sampai dengan bilangan N
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; // counter 1
    int j; // counter 2
    int N; // Bilangan
    int jumlah; // jumlah increament untuk menentukan bilangan prima

    // Algoritma
    printf("Masukan Bilangan    : ");
    
    if (scanf("%d", &N) && N > 0)
    {
        printf("Bilangan Primanya adalah ");

        for (i = 1; i <= N; i++)
        {
            jumlah = 0;

            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    jumlah++;
                }
            }
            
            
            if (jumlah == 2)
            {
                if (i != 2)
                {
                    printf(", ");
                }
                printf("%d", i);
            }
        }
    }
    else{
        printf("Bilangan harus integer dan lebih dari 0");
    }

    return 0;
}
