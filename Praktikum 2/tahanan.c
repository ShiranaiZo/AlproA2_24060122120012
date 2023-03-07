/*
Nama Program  : tahanan
Deskripsi     : Menghitung total masukan tahanan
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int t1, t2, t3; //Masukan tahanan 1, 2, dan 3 
    int total; // Total masukan tahanan

    // Algoritma
    printf("Masukan Tahanan 1   : ");
    scanf("%d", &t1);
    printf("Masukan Tahanan 2   : ");
    scanf("%d", &t2);
    printf("Masukan Tahanan 3   : ");
    scanf("%d", &t3);

    if (t1 >= 0 && t2 >= 0 && t3 >= 0)
    {
        total = t1 + t2 + t3;
        printf("Total : %d", total);
    }else{
        printf("Masukan tahanan tidak boleh negatif");
    }

    return 0;
}
