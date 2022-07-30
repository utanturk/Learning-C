#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Alistirma: Iki sayinin toplamini veren program

    int c;
    int n;

    printf("c sayisini giriniz: ");
    scanf("%d",&c);
    printf("n sayisini giriniz: ");
    scanf("%d",&n);
    printf("c + n = %d",c+n);

    printf("\n\n");



    //x ve y sayilarini birbirleriyle kiyasla

    int x;
    int y;

    printf("X sayisini giriniz: ");
    scanf("%d",&x);
    printf("Y sayisini giriniz: ");
    scanf("%d",&y);

    if (x == 10 && y == 10)
    {
        printf("X ve Y sayilari 10'a esittir\n\n");
    }

    else if (x>y)
    {
        printf("X sayisi Y sayisindan buyuktur\n\n");
    }

    else if (x<y)
    {
        printf("X sayisi Y sayisindan kucuktur\n\n");
    }

    else
    {
        printf("X ve Y 10'dan farkli olmak uzere birbirine esit sayilardir\n\n");
    }

    //p ve q sayilarini degerlerini belirterek birbirleriyle kiyasla

    int p;
    int q;

    printf("Bir sayi giriniz: ");
    scanf("%d",&p);
    printf("Ikinci bir sayi daha giriniz: ");
    scanf("%d",&q);

    if (p>q)
    {
        printf("%d sayisi %d sayisindan buyuktur\n\n",p,q);
    }

    else if (p<q)
    {
        printf("%d sayisi %d sayisindan kucuktur\n\n",p,q);
    }

    else
    {
        printf("%d ve %d birbirine esit sayilardir\n\n",p,q);
    }



    // Girilen 3 farkli sayidan en kücügünü konsola yazdiran program


    printf("Merhaba. Simdi sizde birbirinden farkli olmalari kosuluyla 3 sayi girmenizi isteyecegiz. \n\n\n");
    int k,l,m;
    printf("Ilk sayinizi giriniz: ");
    scanf("%d",&k);
    printf("Ikinci sayinizi giriniz: ");
    scanf("%d",&l);
    printf("Ucuncu sayinizi giriniz: ");
    scanf("%d",&m);

    if (k<l && k<m)
    {
        printf("En kucuk sayi: %d\n\n",k);
    }

    if (l<k && l<m)
    {
        printf("En kucuk sayi: %d\n\n",l);
    }

    if (m<k && m<l)
    {
        printf("En kucuk sayi: %d\n\n",m);
    }

    if (k == m || k == l || l == m)
    {
        printf("Girdiginiz 3 sayi da birbirinden farkli olmaliydi...\n\n");
    }


    // Girilen sayinin tek mi cift mi oldugunu bildiren program

    printf("Tek mi Cift mi?\n");

    int veri;
    printf("Sayinizi giriniz: ");
    scanf("%d",&veri);

    if (veri%2 == 0)
    {
        printf("%d bir cift sayidir\n\n",veri);
    }

    else
    {
        printf("%d bir tek sayidir\n\n",veri);
    }



    // Yasal olarak oy kullanabilir misin programi


    int yas;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d",&yas);

    if (yas>=18)

    {
        printf("Secimlerde yasal olarak oy kullanabilirsiniz.\n\n");
    }

    else

    {
        printf("Yasal olarak oy kullanabilme hakkiniz henuz yoktur.\n\n");
    }


    // Girilen 2 sayinin birbirine gore buyukluk kucukluk durumunu kiyaslayan program

    int v,b;
    printf("Lutfen 2 sayi giriniz:\n");
    scanf("%d%d",&v,&b);

    if (v>b)

    {
        printf("%d > %d",v,b);
    }

    if (v<b)

    {
        printf("%d < %d",v,b);
    }

    else

    {
        printf("%d = %d",v,b);
    }



    //Ayni programin ic ice if kullanilarak yazilmasi

    printf("\n\nLutfen 2 sayi giriniz:\n");
    scanf("%d%d",&v,&b);

    if (v>=b)

    {
        if(v>b)

        {
            printf("%d > %d",v,b);
        }

        if(v=b)

        {
            printf("%d = %d",v,b);
        }
    }

    else

        printf("%d < %d",v,b);



    return 0;
}
