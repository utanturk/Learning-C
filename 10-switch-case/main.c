#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;

    printf("1-7 araliginda bir deger giriniz: ");
    scanf("%d",&day);

    switch(day)

    {
        case 1: printf("Pazartesi haftanin 1. gunudur");
        break;
        case 2: printf("Sali haftanin 2. gunudur");
        break;
        case 3: printf("Carsamba haftanin 3. gunudur");
        break;
        case 4: printf("Persembe haftanin 4. gunudur");
        break;
        case 5: printf("Cuma haftanin 5. gunudur");
        break;
        case 6: printf("Cumartesi haftanin 6. gunudur");
        break;
        case 7: printf("Pazar haftanin 7. gunudur");
        break;
        default : printf("Gecersiz bir deger girdiniz");
    }

    //cok kosullularda kullanimi daha pratik olabilir.

    char x;
    float a,b;

    printf("\n\nLutfen 2 sayi giriniz:\n");
    scanf("%f%f",&a,&b);

    printf("\nLutfen yapmak istediginiz isleme gore + - * / isaretlerinden birini giriniz: ");
    scanf(" %c",&x);

    switch(x)

    {
        case '+' :printf("%.1f+%.1f=%.1f",a,b,a+b);
        break;
        case '-' :printf("%.1f-%.1f=%.1f",a,b,a-b);
        break;
        case '*' :printf("%.1f*%.1f=%.1f",a,b,a*b);
        break;
        case '/' :printf("%.1f/%.1f=%.1f",a,b,a/b);
        break;
        default : printf("Gecersiz bir sembol girdiniz.");
        break;

    }

    printf("\n");

    return 0;
}
