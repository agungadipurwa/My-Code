//Praktikum Modul 2 : Program Palindrome Check

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char bil[100], balik[100];
    int i, str, jum = 0;
    char ulangi = 'Y';
    while (toupper(ulangi) == 'Y')
    {
        printf("Masukkan bilangan: ");
        fflush(stdin);
        gets(bil);
        while (bil[jum] != '\0')
        {
            jum++;
        }
        str = jum - 1;
        for (i = 0; i < jum; i++)
        {
            balik[i] = bil[str];
            str--;
        }
        balik[i] = '\0';
        printf("\nBilangan %s adalah %s", bil, (strcmp(balik, b il)) == 0 ? "bilangan palindrom" : "bukan bilangan palindrom");
        printf("\n=====================================================\nApakah anda ingin memeriksa bilangan lain? (y,n)");
        scanf("%s", &ulangi);
        system("cls");
    }
    return 0;
}
