/*
Nama Program  : CekBilPrima
Deskripsi     : Mengecek apakah bilangan prima atau bukan
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int i; //counter
    int N; // Bilangan
    int jumlah = 0; // jumlah increament untuk menentukan bilangan prima

    // Algoritma
    printf("Masukan Bilangan    : ");

    if (scanf("%d", &N) && N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                jumlah++;
            }
        }
        
        if (jumlah == 2)
        {
            printf("Bilangan Prima");
        }else{
            printf("Bukan Bilangan Prima");
        }
    }
    else{
        printf("Bilangan harus integer dan lebih dari 0");
    }
    

    return 0;
}
