/*
Nama Program  : JumBarKolMat
Deskripsi     : Menampilkan jumlah setiap baris dan kolom pada T
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 16-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int T[10][10];
    int baris;
    int kolom;
    int Total;
    int i;
    int j;

    // Algoritma
    printf("Baris: ");
    scanf("%d", &baris);

    printf("Kolom: ");
    scanf("%d", &kolom);

    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < kolom; j++)
        {
            printf("Masukan nilai ke-%d,%d: ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    for (i = 0; i < baris; i++)
    {    
        Total = 0;
        for (j = 0; j < kolom; j++)
        {
            Total += T[i][j];
        }
        
        // Baris
        printf("Baris ke-%d : %d \n", i + 1, Total);
    }

    for (i = 0; i < kolom; i++)
    {    
        Total = 0;
        for (j = 0; j < baris; j++)
        {
            Total += T[j][i];
        }
        
        // Kolom
        printf("Kolom ke-%d : %d \n", i + 1, Total);
    }
    
    return 0;
}

// int main()
// {
//     // Kamus Lokal
//     int *T[10][10]; // counter 1
//     int baris;
//     int kolom;
//     int Total;
//     int i;
//     int j;
//     bool check = true;

//     // Algoritma
//     printf("Baris: ");
//     if(scanf("%d", &baris) && baris > 0){
//         printf("Kolom: ");

//         if(scanf("%d", &kolom) && kolom > 0 ){
//             T = (int*)malloc(baris*kolom*sizeof(int));

//             for (i = 0; i < baris; i++)
//             {
//                 for (j = 0; j < kolom; j++)
//                 {
//                     printf("Masukan nilai ke-%d,%d: ", i, j);
//                     scanf("%d", &T[i][j]);
//                 }
//             }

//             for (i = 0; i < baris; i++)
//             {    
//                 Total = 0;
//                 for (j = 0; j < kolom; j++)
//                 {
//                     Total += T[i][j];
//                 }
                
//                 // Baris
//                 printf("Baris ke-%d : %d \n", i + 1, Total);
//             }

//             for (i = 0; i < kolom; i++)
//             {    
//                 Total = 0;
//                 for (j = 0; j < baris; j++)
//                 {
//                     Total += T[j][i];
//                 }
                
//                 // Kolom
//                 printf("Kolom ke-%d : %d \n", i + 1, Total);
//             }
//         }else{
//             printf("Kolom harus integer dan lebih dari 0");
//         }
//     }else{
//         printf("Baris harus integer dan lebih dari 0");
//     }
    
//     return 0;
// }
