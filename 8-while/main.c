#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Sonsuz dongu

    int s=5;

    while(s<10)

    {
        printf("bu cumle sonsuza kadar yazilacak\n");
    }

    */

    //Birden 70'e kadar olan sayilarin yazdirilmasi.

    int m=0;

    while(m<70)

    {
        printf("%d\t",m);
        m=m+1;
    }

    //Girilen sayi tek ise 10'a kadar olan sayilarla; cift ise 30'a kadar olan sayilarla carpilip yazdirilir.

    int n;
    int k=1;

    printf("\n\nBir sayi giriniz: ");
    scanf("%d",&n);

    if(n%2==0)

    {
        while(k<=10)

        {
            printf("%d\n",n*k);
            k++;
        }
    }

    if(n%2==1)

    {

        while(k<=30)

    {
        printf("%d\t",n*k);
        k++;
    }


    }

    // 0'dan 40'a kadar olan tek ve cift sayilari ekrana bastiriniz


    int h=0;
    printf("\n\n\n40'a kadar olan tek ve cift sayilar;\n\n\n");

    printf("Cift sayilar:");

    while(h<40)
    {
        printf("%d ",h);
        h += 2;
    }

    printf("\nTek sayilar:");

    int p=0;

    while(p<40)
    {
        printf("%d ",p+1);
        p += 2;
    }


    int sayim=5040;
    int bolen=7;

    printf("\n\n5040(7!) sayisinin 1 carpanina kadar bolunmesi:\n");

    while(bolen>=1)
    {
        printf("%d\n",sayim/bolen);
        sayim = sayim/bolen;
        bolen = bolen-1;
    }

    // Ayni program for dongusu ile


    printf("\n\n\n5040(7!) sayisinin sirasiyla 7,6,5..2,1 ile bolunmesi :\n");

    int sayim2=5040;
    int bolen2;

    for (bolen2=7;bolen2>=1;bolen2-=1)

    {
        printf("%d\n",sayim2/bolen2);
        sayim2= sayim2/bolen2;
    }

    /*

    while(1)
    {
        printf("Bu cumle hic durmadan bastirilacak\n");
    }

    */

    while(0)
    {
        //buradaki kodlar calismaz
    }


    int r=15;
    do {

            printf("\nDo while kullaniminda kosul saglanmasa da kodlar bir kereligine calistirilir. %d\n",r);


    } while(r<10);  //program 15<10 sartini okumadan once bir defa kodu calistirmis oldu.


    //do while ile sonsuz dongu ornegi

    int t=1;
    int u;

    printf("Bir sayi giriniz: ");
    scanf("%d",&u);
    do {
            printf("%d\n",u*t);
            t++;
    } while(1);


        return 0;


}
