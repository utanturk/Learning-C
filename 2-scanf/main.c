#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi;
    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);
    printf("Sayiniz: %d",sayi);

    printf("\n\n");



    char karakter;
    printf("Lutfen bir karakter giriniz:\n");
    scanf(" %c",&karakter);
    printf("Karakteriniz: %c",karakter);

    printf("\n\n");



    float ondalikli;
    printf("Lutfen bir ondalikli sayi giriniz:\n");
    scanf("%f",&ondalikli);
    printf("Ondalikli Sayiniz: %.3f",ondalikli);

    printf("\n\n");



    double ondalikli2;
    printf("Lutfen bir ondalikli sayi giriniz:\n");
    scanf("%lf",&ondalikli2);
    printf("Sayiniz: %.3lf",ondalikli2);

    printf("\n\n");


    /* Kullanicidan 2 adet sayi ve isminin bas harfini aliniz
    ilk sayim bu, ikinci sayim bu, ismimin bas harfi bu seklinde ekrana yazdiriniz */

    char harf;
    printf("Isminizin bas harfini giriniz: ") ;
    scanf(" %c",&harf);

    int sayi1;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi1);

    int sayi2;
    printf("Bir sayi daha giriniz: ");
    scanf("%d",&sayi2);

    printf("Size ozel giris kodunuz: %c%d%d",harf,sayi1,sayi2);

    return 0;
}
