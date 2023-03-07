/*
Nama Program  : CekBilSemp
Deskripsi     : Menentukan bilangan sempurna
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i = 1; //counter
    int N; // bilangan
    int jumlah = 0; // jumlah faktor bilangan

    // Algoritma
    printf("Masukan Bilangan    : ");

    if (scanf("%d", &N) && N > 0)
    {
        while (i <= N)
        {
            if (N % i == 0 && N != i)
            {
                jumlah += i;
            }

            i++;
        }
        
        if (jumlah == N)
        {
            printf("Bilangan Sempurna");
        }else{
            printf("Bukan Bilangan Sempurna");
        }
    }
    else{
        printf("Bilangan harus integer dan lebih dari 0");
    }

    return 0;
}
