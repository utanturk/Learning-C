#include <stdio.h>
#include <stdlib.h>

int main()

    //kullanicinin girdigi i sayisinin for dongusunde sinirlayici olarak kullanilmasi.
{
    int i,e;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&i);

    for(e=0;e<=9999999;e++)

    {
        printf("%d\n",e);
        if(e==i)
        {
            break;
        }
    }

    //kullanicinin girdigi a sayisinin for dongusunde gozardi edilmesi.

    int a,b;
    printf("\nLutfen bir rakam giriniz: ");
    scanf("%d",&a);

    for(b=0;b<10;b++)
    {
        if(a==b)
        {
            continue;
        }
        printf("%d\n",b);
    }

    printf("Girdiginiz %d rakami bastirilmadi (continue).\n\n",a);
    return 0;
}
