#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // gets-fgets scanf yerine kullanilir. scanf bosluk karakterini gordukten sonrasini geri dondurmez. gets-fgets ile bu sorun cozulur.

    char name1[30]="";
    printf("Lutfen isminizi giriniz:\n");
    gets(name1);
    printf("%s",name1);

    printf("\n");

    char name2[30]="";
    printf("Lutfen isminizi giriniz:\n");
    fgets(name2,sizeof(name2),stdin);
    printf("%s",name2);


    printf("\n\n");

    //strrev girilen metni tersine cevirir

    char text[100];
    printf("Lutfen bir text giriniz:\n");
    fgets(text,sizeof(text),stdin);

    printf("\n");

    printf("Girdiginiz ifade:\n%s",text);
    printf("Ters cevrilmis ifade:%s",strrev(text));

    printf("\n\n");

    //strlwr girilen metindeki tum harfleri kucuk harfe donusturur


    char lwr[100];
    printf("Lutfen buyuk harflerle bir metin giriniz:\n");
    fgets(lwr,sizeof(lwr),stdin);

    printf("Girdiginiz metin: %s",lwr);
    printf("Duzenlenmis metin: %s",strlwr(lwr));
    printf("\n\n");

    //strupr girilen metindeki tum harfleri buyuk harfe donusturur

    char upr[100];
    printf("Lutfen kucuk harflerle bir metin giriniz:\n");
    fgets(upr,sizeof(upr),stdin);
    printf("Girdiginiz metin: %s",upr);
    printf("Duzenlenmis metin: %s",strupr(upr));

    printf("\n\n");

    //strstr

    char learnc[100]="C dilini ogreniyoruz.";
    char *search;

    search=strstr(learnc,"ogr");
    printf("Arama sonuclari: %s",search);

    return 0;
}
