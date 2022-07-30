#include <stdio.h>
#include <stdlib.h>


void tekcift (int sayi)
{
    if(sayi%2==0)
    {
        printf("Sayiniz cift sayidir");
    }

    else

    {
        printf("Sayiniz tek sayidir");
    }

}

int cifttek (int sayi2)
{
    if(sayi2%2==0)

    {
        return 0;
    }

    else
    {
        return 1;
    }
}

float dortislem (float s1, float s2, char op)

{
    if(op=='+')
    {
        return s1+s2;
    }

    else if(op=='-')
    {
        return s1-s2;
    }

    else if(op=='*')
    {
        return s1*s2;
    }

    else if(op=='/')
    {
        return s1/s2;
    }

    else
    {
        printf("Gecersiz islem yaptiniz");
    }
}


float dortislem2 (float s3, float s4, char op2)
    {
        switch(op2)
        {
            case '+': return s3+s4;
            break;
            case '-': return s3-s4;
            break;
            case '*': return s3*s4;
            break;
            case '/': return s3/s4;
            break;
            default : printf("Gecersiz bir deger girdiniz");
            break;
        }
    }

int main()

{

    // girilen sayinin tek mi cift mi oldugunu bulan kodu fonksiyonla deger dondurerek ve dondurmeyerek yaziniz.

    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    tekcift(sayi);

    printf("\n\n");

    int sayi2,sonuc;

    printf("Bir sayi girin: ");
    scanf("%d",&sayi2);
    sonuc=cifttek(sayi2);

    if(sonuc==1)
    {
        printf("Sayiniz tek sayidir");
    }

    else
    {
        printf("Sayiniz cift sayidir");
    }

    printf("\n\n");


    // 4 islem yapan programi fonksiyon kullanarak switch-case ve if-else ile yaziniz;


    float s1,s2,s3,s4;
    char op,op2;

    printf("Iki sayi giriniz:\n");
    scanf("%f%f",&s1,&s2);
    printf("+ - * / sembollerinden birini seciniz: ");
    scanf(" %c",&op);

    float sonuc2 = dortislem(s1,s2,op);
    printf("%.2f %c %.2f = %.2f",s1,op,s2,sonuc2);
    printf("\n\n");

    printf("Iki sayi giriniz:\n");
    scanf("%f%f",&s3,&s4);
    printf("+ - * / sembollerinden birini seciniz: ");
    scanf(" %c",&op2);

    float sonuc3 = dortislem2(s3,s4,op2);
    printf("%.2f %c %.2f = %.2f",s3,op2,s4,sonuc3);
    printf("\n\n");


    return 0;
}
