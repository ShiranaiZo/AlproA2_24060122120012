/*
Nama Program  : SimetriTabel
Deskripsi     : Cek apakah T1 dan T2 Simetri atau tidak
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
    int *T1;
    int *T2;
    int N1; 
    int N2; 
    int i; 
    bool check = true;
    bool checkValue = true;

    // Algoritma
    printf("Masukan Jumlah Aray 1    : ");

    if (scanf("%d", &N1) && N1 > 0){
        T1 = (int*)malloc(N1*sizeof(int));

        for (i = 0; i < N1; i++)
        {
            printf("Masukan nilai ke-%d: ", i + 1);

            if(!(scanf("%d", &T1[i]) && T1[i] > 0)){
                checkValue = false;
                break;
            };
        }

        if (checkValue)
        {
            printf("Masukan Jumlah Aray 2    : ");
            
            if(scanf("%d", &N2) && N2 > 0){
                T2 = (int*)malloc(N2*sizeof(int));

                for (i = 0; i < N2; i++)
                {
                    printf("Masukan nilai ke-%d: ", i + 1);
                    
                    if(!(scanf("%d", &T2[i]) && T2[i] > 0)){
                        checkValue = false;
                        break;
                    };
                }

                if (checkValue)
                {
                    if (N1 == N2)
                    {
                        for (i = 0; i < N1; i++)
                        {
                            if (T1[i] != T2[i])
                            {
                                check = false;
                            }
                        }
                        
                        if (check)
                        {
                            printf("Simetri");
                        }else{
                            printf("Tidak Simetri");
                        }
                    }else{
                        printf("Tidak Simetri");
                    }
                }else{
                    printf("Nilai harus integer dan lebih dari 0");
                }
                
            }else{
                printf("Ukuran harus integer dan lebih dari 0");
            }
        }else{
            printf("Nilai harus integer dan lebih dari 0");
        }
    }else{
        printf("Ukuran harus integer dan lebih dari 0");
    }
    
    
    return 0;
}
