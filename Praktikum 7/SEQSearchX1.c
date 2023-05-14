/*
Nama Program  : SEQSearchX1
Deskripsi     : Mencari suatu nilai di dalam array
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 14-05-2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void SEQSearchX1(int T[], int *N, int *X, int *IX){
    // Kamus Lokal
    int i;

    // Algoritma
    i = 1;

    while ((i < *N) && (T[i] != *X))
    {
        i = i + 1;
    }

    if (T[i] == *X)
    {
        *IX = i;
    }else{
        *IX = 0;
    }
}

int main(void){
    // Kamu Lokal
    int N, X, IX, i;
    int *T;
    bool checkValue = true;

    // Algoritma
    printf("Masukan Ukuran: ");

    if (scanf("%d", &N) && N > 0){
        T = (int*)malloc((N+1)*sizeof(int));

        for (i = 1; i <= N; i++)
        {
            printf("Masukan Nilai ke-%d: ", i);
            
            if(!scanf("%d", &T[i])){
                checkValue = false;
                break;
            };
        }

        if (checkValue)
        {
            printf("Cari Nilai: ");


            if(scanf("%d", &X)){
                SEQSearchX1(T, &N, &X, &IX);

                if (IX > 0)
                {
                    printf("%d ditemukan pada indeks ke %d", X, IX);
                }else{
                    printf("%d tidak ditemukan", X);
                }
            }else{
                printf("Nilai yang dicari harus integer");
            };
            
        }else{
            printf("Nilai harus integer");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }

    return 0;
}
