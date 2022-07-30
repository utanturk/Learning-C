#include <stdio.h>
#include <stdlib.h>

float fonksiyon(float veri_yansima)

{
    float sonuc = veri_yansima*veri_yansima;
    return sonuc;
}

void fonksiyon2(float veri2, float *adres_yansima)
{
    *adres_yansima = veri2*veri2;
}

int fonksiyon3(int taban, int kuvvet)

{
    int i;
    int islem=1;
    for(i=0;i<kuvvet;i++)
    {
        islem = islem*taban;
    }

    return islem;

}

void fonksiyon4(int taban2, int kuvvet2, int *sonuc2)
{
    *sonuc2=1;
    int r;
    for(r=0;r<kuvvet2;r++)
    {
        *sonuc2 = *sonuc2*taban2;
    }
}


int main()
{

    //adressiz fonksiyon kullanimi

    float veri;
    float karesi;

    printf("Bir sayi giriniz: ");
    scanf("%f",&veri);

    karesi = fonksiyon(veri);

    printf("Sayinizin karesi: %.2f",karesi);

    printf("\n\n");

    //adresle fonksiyon kullanimi;


    float veri2;
    float adres;


    printf("Bir sayi giriniz: ");
    scanf("%f",&veri2);

    fonksiyon2(veri2,&adres);

    printf("%.2f",adres);

    printf("\n\n");

    //pratik1

    int taban,kuvvet,sonuc;

    printf("Taban degerini giriniz: ");
    scanf("%d",&taban);
    printf("Kuvvet degerini giriniz: ");
    scanf("%d",&kuvvet);

    sonuc = fonksiyon3(taban,kuvvet);

    printf("%d",sonuc);

    printf("\n\n");

    //pratik2

    int taban2, kuvvet2, sonuc2;

    printf("Taban degerini giriniz: ");
    scanf("%d",&taban2);
    printf("Kuvvet degerini giriniz: ");
    scanf("%d",&kuvvet2);

    fonksiyon4(taban2,kuvvet2,&sonuc2);

    printf("%d",sonuc2);


return 0;
}
