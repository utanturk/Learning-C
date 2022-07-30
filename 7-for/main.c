#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=1;i<=33;i++)

    {
        if(i%3==0)

        {
            printf("%d",i);
        }

        else

        {
            printf("e");
        }
    }

    printf("\n");

    //Kullanicidan 1 sayi girmesini isteyiniz. 1'den gireceginiz sayiya kadar olan degerler toplamini for dongusu ile hesaplayiniz.



    int sayim;
    int a;
    int toplam=0;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayim);

    for(a=1;a<=sayim;a++)

    {
        toplam = toplam + a;
    }


    printf("%d",toplam);





    //her dongudeki toplama sonucunun yazdirilmasi



    int sayim2;
    int p;
    int toplam2=0;

    printf("\nBir sayi giriniz: ");
    scanf("%d",&sayim2);

    for(p=1;p<=sayim2;p++)

    {
        toplam2 = toplam2 + p;
        printf("%d\n",toplam2);
    }


    int x;
    char t;

    printf("\n");

    printf("145'ten baslayarak ucer ucer sayilsin mi? (y/n): ");
    scanf(" %c",&t);

    if (t == 'y')

    {
        for(x=145;x<=900;x=x+3)

        {
            printf("%d\t",x);
        }
    }

    else if (t == 'n')

    {
        printf("Sayi yazdirilmiyor");
    }

    else

    {
        printf("Gecersiz islem yaptiniz");
    }



    return 0;
}
