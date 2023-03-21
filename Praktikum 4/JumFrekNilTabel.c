/*
Nama Program  : JumFrekNilTabel
Deskripsi     : Menjumlahkan nilai elemen T yang kemunculannya lebih dari satu kali 
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
    int j; 
    int total = 0; 
    int sum;
    bool check = true;

    // Algoritma
    printf("Masukan Ukuran    : ");

    if(scanf("%d", &n) && n > 0){
        T = (int*)malloc(n*sizeof(int));

        for (i = 0; i < n; i++)
        {
            printf("Masukan nilai ke-%d: ", i + 1);

            if(!(scanf("%d", &T[i]) && T[i] > 0)){
                check = false;
                break;
            }
        }

        if (check)
        {
            for (i = 0; i < n; i++)
            {
                sum = 0;

                for (j = 0; j < n; j++)
                {
                    if (T[i] == T[j])
                    {
                        sum++;
                    }
                }
                
                if (sum > 1)
                {
                    total += T[i];
                }
            }

            printf("Jumlahnya adalah %d", total);
        }else{
            printf("Nilai harus integer dan lebih dari 0");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }
    
    return 0;
}
