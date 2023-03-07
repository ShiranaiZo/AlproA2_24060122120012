/*
Nama Program  : BilSempN
Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan ke N
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; //counter 1
    int j; //counter 2
    int N; //Bilangan
    int jumlah; // jumlah faktor bilangan

    // Algoritma
    printf("Masukan Bilangan    : ");
    scanf("%d", &N);
    
    printf("Bilangan Sempurnanya adalah ");
    for (i = 1; i <= N; i++)
    {
        jumlah = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {
                jumlah += j;
            }
        }
        
        if (jumlah == i)
        {
            if (i != 6)
            {
                printf(", ");
            }

            printf("%d", i);
        }
    }

    return 0;
}
