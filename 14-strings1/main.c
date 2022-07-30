#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //string dizilerin tanimlanmasi

    char karakter[]={'U','b','e','y','d','e','\0'};
    printf("%s\t",karakter);

    char isimler[]="Ubeyde2";
    printf("%s",isimler);

    char kullanici[100];
    printf("\n\n");

    printf("Bir parola giriniz: ");
    scanf("%s",&kullanici);
    printf("Parolaniz: %s",kullanici);

    //string islemleri


    char me[]="Tahmin";
    printf("\n\n%s --> ",me);
    me[3]='s';
    printf("%s (3. harf degistirildi)",me);

    printf("\n\n");


    //strlen karakter dizisinin uzunlugunu geri dondurur.

    char month[]="Temmuz";
    printf("%s ayinin harf sayisi: %d (strlen)",month,strlen(month));

    printf("\n");

    printf("%s ayinin boyutu: %d (sizeof)",month,sizeof (month));

    printf("\n\n");

    //strcmp

    char buyuk[]="Mehmet";
    char kucuk[]="Fatma";
    int sonuc;


    sonuc=strcmp(buyuk,kucuk);

    if(sonuc>0)

    {
        printf("Mehmet Fatma'dan buyuktur. (stcmp) ");
    }

    else if(sonuc<0)
    {
        printf("Mehmet Fatma'dan kucuktur. (stcmp)");
    }

    else
    {
        printf("Mehmet ile Fatma birbirine esittir. (stcmp)");
    }

    printf("\n");


    sonuc=strncmp(buyuk,kucuk,3);

    if(sonuc>0)

    {
        printf("Mehmet(3) Fatma'dan(3) buyuktur. (stcmp)");
    }

    else if(sonuc<0)
    {
        printf("Mehmet(3) Fatma'dan(3) kucuktur. (stcmp)");
    }

    else
    {
        printf("Mehmet(3) ile Fatma(3) birbirine esittir. (stcmp)");
    }

    printf("\n\n");

    //strcpy

    char copyfrom[]="Bu metin baslangicta ici bos olan bir karakter dizisine atanip yazdirildi.";
    char copyto[100]=""; //tanimlanmamis string olustururken boyle yap yoksa hata alabilirsin

    strcpy(copyto,copyfrom);

    printf("%s",copyto);

    printf("\n\n");

    //strncpy

    char text1[]="asdfghjkl";
    char text2[100];

    strncpy(text2,text1,3);

    printf("%s dizisinin ilk 3 karakteri: %s",text1,text2);

    printf("\n\n");

    //strcat bos olmayan bir karakter dizisine ekleme yapmak icin kullanilir.

    char bos[]="";

    strcpy(bos,"Benim");
    strcat(bos," adim");
    strcat(bos," Ubeyde");

    printf("%s (strcpy+strcat+strcat)",bos);

    printf("\n\n");

    //strncat

    char ilk[100];
    char ikinci[100];
    int i;

    printf("Lutfen bir yazi giriniz: \n");
    scanf("%s",&ilk);
    printf("Lutfen ikinci bir yazi daha giriniz: \n");
    scanf("%s",&ikinci);
    printf("Ilk yazinin sonuna kac karakter eklemek istersiniz? \n");
    scanf("%d",&i);

    printf("Birlestirmeden once: %s\n",ilk);
    printf("Birlestirmeden sonra: %s\n",strncat(ilk,ikinci,i));
}
