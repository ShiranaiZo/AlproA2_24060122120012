/*
Nama Program  : NilMax2Tabel
Deskripsi     : Menampilkan nilai maksimum ke 2 dari T
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 16-03-2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Kamus Lokal
    int *T; 
    int n;
    int i; 
    int max = 0;
    int max2 = 0;
    bool check = true;

    // Algoritma
    printf("Masukan Ukuran    : ");

    if (scanf("%d", &n) && n > 0){
        T = (int*)malloc(n*sizeof(int));

        for (i = 0; i < n; i++)
        {
            printf("Masukan nilai ke-%d: ", i + 1);

            if (scanf("%d", &T[i]) && T[i] > 0)
            {
                if (T[i] > max)
                {
                    max2 = max;
                    max = T[i];
                }

                if (T[i] != max && T[i] > max2)
                {
                    max2 = T[i];
                }
            }else{
                check = false;
                break;
            }
        }

        if (check)
        {
            printf("Nilai Max ke 2 adalah %d", max2);
        }else{
            printf("Nilai harus integer dan lebih dari 0");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }

    return 0;
}
