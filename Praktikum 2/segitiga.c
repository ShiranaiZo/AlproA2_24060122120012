/*
Nama Program  : segitiga
Deskripsi     : Menentukan jenis segitiga
Nama Pembuat  : Faishal Bariq Maulana
NIM           : 24060122120012
Tanggal       : 07-03-2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    int s1, s2, s3; //Sisi 1, 2, dan 3

    //Algoritma
    printf("Masukan Sisi 1   : ");
    scanf("%d", &s1);
    printf("Masukan Sisi 2   : ");
    scanf("%d", &s2);
    printf("Masukan Sisi 3   : ");
    scanf("%d", &s3);

    if (s1 > 0 && s2 > 0 && s3 > 0)
    {
        if (s1 == s2 && s1 == s3 && s2 == s3)
        {
            printf("Segitiga Sama Sisi");
        }else if(s1 == s2 || s1 == s3 || s2 == s3){
            printf("Segitiga Sama Kaki");
        }else{
            printf("Segitiga Sembarang");
        }
    }else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

    return 0;
}
