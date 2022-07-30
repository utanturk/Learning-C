#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main()

{

    /*
    float PI = 3.15;

    define varken bu kodu aktiflestirirsen hata verir.
    */


    printf("PI sayisi cemberin cevresinin capina orani olup sabittir: %.2f\n",PI);



    const char karakter='K';
    printf("Karakter: %c\n",karakter);

    /*

    karakter = 'A';
    printf("Karakter: %c\n",karakter);


    Kodu aktiflestirirsen const kullandigin icin hata verir.
    */

    return 0;
}
