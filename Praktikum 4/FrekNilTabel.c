/*
Nama Program  : FrekNilTabel
Deskripsi     : Menampilkan nilai elemen T yang kemunculannya lebih dari 1 kali
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
    int *T_display;
    int n;
    int i;
    int j;
    int sum;
    bool check = true;

    // Algoritma
    printf("Masukan Ukuran    : ");

    if (scanf("%d", &n) && n > 0)
    {
        T = (int*)malloc(n*sizeof(int));
        T_display = (int*)malloc(n*sizeof(int));

        for (i = 0; i < n; i++)
        {
            printf("Masukan nilai ke-%d: ", i + 1);

            if(!(scanf("%d", &T[i]) && T[i] > 0)){
                check = false;
                break;
            }

            T_display[i] = 0;
        }

        if (check)
        {
            for (i = 0; i < n; i++)
            {
                sum = 0;
                
                if (T_display[i] != 1)
                {
                    for (j = 0; j < n; j++)
                    {
                        if (T[i] == T[j])
                        {
                            sum++;
                            T_display[j] = 1;
                        }
                    }
                    
                    if (sum > 1)
                    {

                        printf("%d ", T[i]);
                    }
                }
            }
        }else{
            printf("Nilai harus integer dan lebih dari 0");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }
    
    return 0;
}
