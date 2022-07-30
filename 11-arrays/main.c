#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{

    bool x=false; //0
    bool y=true; //1

    printf("%d\n",x);
    printf("%d\n\n",y);

    /*

     ceil -> ondalik sayiyi tavana yuvarlama
     floor -> ondalik sayiyi tabana yuvarlama
     sqrt -> karekok alir
     pow -> uslu sayi
     abs -> mutlak deger

    */


    printf("Tavana yuvarlama (3.1): %.2f\n",ceil(3.1));
    printf("Tabana yuvarlama (8.9): %.2f\n",floor(8.9));
    printf("Karekok alma (729): %.2f\n",sqrt(729));
    printf("Karekok alma (175): %.2f\n",sqrt(175));
    printf("Sayinin kuvvetini alma (2^9): %.2f\n",pow(2,9));
    printf("Sayinin mutlak degerini alma (-100): %.2d\n",abs(-100));

    float sayim=2.25;
    printf("\n%f",sayim);

    float sayim2=9/4;
    printf("\n%f",sayim2);

    float sayim3=9.0/4.0;
    printf("\n%f",sayim3);

    float sayim4=(float)9/4;
    printf("\n%f\n\n\n",sayim4);


    // karakterlerin ASCI degerlerinin yazdirilmasi
    printf("%d\t %d\t %d\t %d\t %d\n\n\n",'a','b','c','d','e');


    // alfabenin ASCI yardimiyla yazdirilmasi

    int i;

    for(i='a'; i<='z'; i++)

    {
        printf("%c  ",i);
    }

    //10 elemanli elemanlari tanimlanmamis sayi dizisi olusturulup dizinin m. elemani 2m olarak tanimlanir. sayi dizisi ekrana bastirilir.

    printf("\n\n\n");

    int m;

    int dizi[10];

    for(m=0;m<=9;m++)

    {
        dizi[m]=2*m;
        printf("%d  ",dizi[m]);
    }

    printf("\n\n\n");

    //7 elemanli sayi dizisinin tum elemanlari yazdirilir.
    int sayilar[7]={137,352,920,573,684,219,725};
    int s;
    for(s=0;s<=6;s++)

    {
        printf("\n%d\n",sayilar[s]);

    }

    printf("\n\n\n");

    //Yemek menusundeki fiyatlar uygulamasi

    int q,w;
    char ch,soru;
    int menuler[9]={30,35,40,45,50,55,60,70,100};

    printf("Hos geldiniz.\n\n");
    printf("Menu fiyat listesini goruntulemek icin 'f' menude degisiklik yapmak icin 'd' yaziniz: ");
    scanf("%c",&ch);

    if(ch=='f')
    {
        for(q=0;q<=8;q++)
        {
            printf("\t\t%d\t%d\n",q,menuler[q]);
        }
    }

    if (ch=='d')
    {
        printf("Fiyatini degistirmek istediginiz menuyu (0-8) seciniz: ");
        scanf("%d",&q);
        printf("Yeni fiyati belirleyiniz: ");
        scanf("%d",&w);
        menuler[q]=w;
        printf("Islem basariyla tamamlandi. Yeni fiyat listesi goruntulensin mi? (y/n) ");
        scanf(" %c",&soru);

        if (soru=='y')

        {
            for(q=0;q<=8;q++)
            {
                printf("\t\t%d\t%d\n",q,menuler[q]);
            }
        }

        else if (soru=='n')
        {
            printf("Cikis yapiliyor.");
        }

        else
        {
            printf("Gecersiz karakter girdiniz.");
        }
    }


    return 0;
}
