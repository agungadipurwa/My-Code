//Praktikum Modul 4: Program Palindrome Check dengan Pointer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define max 999

int cek(char *kata, int size);

int main()
{
    //Deklarasi beberapa variabel yang diperlukan//
    char kata[max];
    int kotak,size;
    char ulangi = 'Y';
    //Agar user dapat memeriksa kata atau kalimat lainya gunakan blok perulangan
    //dan fungsi dari ctype yaitu touuper untuk membuat iput user selalu kapital sehingga
    //tidak ada kesalahan antar y dengan Y atau n dengan N. 
    while(toupper(ulangi) == 'Y')
    {
        printf("Masukkan kalimat atau kata: ");
        fflush(stdin);
        gets(kata);
        //selanjutnya hitung berapa panjang string untuk digunakan pada batas perulangan
        //menghasilkan string kebalikan dari kata yang diinput.
        size = strlen(kata)-1;
        //varibel kotak berfungsi menyimpan nilai return dari funsi cek.
        kotak = cek(strlwr(kata), size);
        //jika nilai return 0, pada penyeleksian kondisi tenary palindrome akan ditampilkan begitu sebaliknya.
        printf("%s adalah %s", strlwr(kata), kotak == 0 ? "palidrome" : "bukan palidrome");
        printf("\n=====================================================\nApakah anda ingin memeriksa kata atau kalimat lain? (y,n)\n");
        //ulangi program dengan input y begitu pula sebaliknya.
        scanf("%s", &ulangi);
    }
    return 0;
}

int cek(char *kata,int size){
    char balik[max];
    int i,jum;
    //varibel jum menyimpan panjang string keseluruhan hingga /0.
    jum = size + 1;
    //blok perulangan ini digunakan untuk membalik string.
    for (i = 0; i < jum; i++)
    {
        balik[i] = kata[size];
        //dengan menggunakan size decrement makan string akan dimasukan kembali ke varibel balik dari belakang kedepan
        size--;
    }
    //oleh karena string selalu diakhir /0, varibel balik[i] dengan nilai i yang sudah diincrement pada for
    //bernilai jum atau sepanajng string sehingga array of string indeks terakhir bernilai /0.
    balik[i] = '\0';
    //untuk mengetahui apakah string tersebut sama setalah dibalik, menggunakan fungsi strcmp atau string compare
    //jika bernilai 0, kedua string tersebut sama begitu pula sebaliknya. Setelah ini hasilnya direturn.
    return strcmp(balik,kata);
}
