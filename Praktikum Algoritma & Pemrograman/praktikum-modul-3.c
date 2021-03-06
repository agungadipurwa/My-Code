//Praktikum Modul 3: Program Perkalian Dua Matriks

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

int main(){
    int i,j,k,baris,barisB,kolomA,kolom,arrA[MAX][MAX],arrB[MAX][MAX],arrC[MAX][MAX];
    char ulang = 'Y';
    while(toupper(ulang)=='Y'){
        puts("===Program Perkalian Dua Matriks===");
        printf("\nInput orde A[baris][kolom]: ");printf("\nBaris: ");scanf("%d",&baris);printf("Kolom: ");scanf("%d",&kolomA);
        printf("\nInput orde B[baris][kolom]: ");printf("\nBaris: ");scanf("%d",&barisB);printf("Kolom: ");scanf("%d",&kolom);
        if(kolomA==barisB)
        {
            printf("Matriks A[%d][%d]:\n",baris,kolomA);
            for(i = 1; i<=baris; i++){
                for(j = 1; j<=kolomA; j++){
                    printf("\nMasukkan nilai A[%d][%d]: ",i,j);scanf("%d",&arrA[i][j]);
                }
            }
            printf("Matriks B[%d][%d]:\n",barisB,kolomA);
            for(i = 1; i <= barisB; i++){
                for(j = 1; j <= kolom; j++){
                    printf("\nMasukkan nilai B[%d][%d]: ",i,j);scanf("%d",&arrB[i][j]);
                }
            }
            printf("\nHasil kali Matriks A[%d][%d]xB[%d][%d] adalah AB[%d][%d]\nAB[%d][%d]:\n",baris,kolomA,barisB,kolom,baris,kolom,baris,kolom);
           for(i = 1; i <= baris; i++){
                for(j = 1; j <= kolom; j++){
                    arrC[i][j]=0;
                    for(k=1;k<=barisB;k++){
                        arrC[i][j]+=arrA[i][k]*arrB[k][j];
                    }
                    printf("%d ", arrC[i][j]);
                }
                puts("");
            }
        } 
        else{
            printf("Kolom A tidak sama dengan Baris B sehingga matriks tidak dapat dikalikan. Silahkan ulang kembali!");
        }
        printf("\n(Y/N): ");
        scanf("%s", &ulang);
        system("pause");
        system("cls");
    }
    puts("Terimakasih sudah menggunakan program ini ^-^");
    return 0;
}
