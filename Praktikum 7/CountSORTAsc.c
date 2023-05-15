/*
Nama Program  : CountSORTAsc
Deskripsi     : Mengurutkan tabel integer dengan pencacahan ascending
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 15-05-2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// void CountSORT(int T[], int *N, int *X, int *IX){
void CountSORT(int T[], int *N, int *ValMin, int *ValMax){
    // Kamus Lokal
    int i, K;
    int *TabCount;

    // Algoritma
    TabCount = (int*)malloc((*ValMax - *ValMin + 1)*sizeof(int));
    for(i=*ValMin;i<=*ValMax;i++){
        TabCount[i] = 0;
    }

    for(i=1;i<=*N;i++){
        TabCount[T[i]] = TabCount[T[i]] + 1;
    }

    K=0;
    for(i=*ValMin;i<=*ValMax;i++){
        if(TabCount[i] != 0){
            do {
                K = K+1;
                T[K]=i;
                TabCount[i]--;
            } while (TabCount[i] != 0);
        }
    }
}

int Min(int T[], int *ValMin, int *N){
    // Kamus lokal
    int i;

    // Algoritma
    for(i=1;i<=*N;i++){
        if(*ValMin>T[i]){
            *ValMin = T[i];
        }
    }
}

int Max(int T[], int *ValMax, int *N){
    // Kamus lokal
    int i;

    // Algoritma
    for(i=1;i<=*N;i++){
        if(*ValMax<T[i]){
            *ValMax = T[i];
        }
    }
}

int main(void){
    // Kamus Lokal
    int N, i, ValMin, ValMax;
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
            ValMin = T[1];
            ValMax = T[N];
            Min(T, &ValMin, &N);
            Max(T, &ValMax, &N);
            
            CountSORT(T, &N, &ValMin, &ValMax);

            printf("Sort by descending: ");
            for(i=1;i<=N;i++){
                printf("%d ",T[i]);
            }
        }else{
            printf("Nilai harus integer");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }

    return 0;
}
