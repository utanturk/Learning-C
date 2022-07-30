#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Arithmetick Operators: + - * / % ++ --
    */


     int x=15;
     int y=25;
     int sonuc=x+y;

     printf("15 + 25 = %d\n\n",sonuc);



    /*
    Assigment Operators: = += -= *= /= %=
    */

    /*
    Kullanimlar:

    int a=90;

    a = a+5;
    a += 5;

    a = a-5;
    a -= 5;

    a = a/5;
    a /= 5;

    a = a*5;
    a *= 5;

    a = a%5;
    a %= 5;

    */

    /*
    Comparision Operators: == != > < >= <=
    */

    printf("Dogruluk degerleri (d=1 y=0); \n");

    int m=30;
    int n=50;

    printf("30 = 50 mi: %d\n",m==n);
    printf("30 != 50 mi: %d\n",m!=n);
    printf("30 > 50 mi: %d\n",m>n);
    printf("30 < 50 mi: %d\n",m<n);
    printf("30 <= 50 mi: %d\n",m<=n);
    printf("30 >= 50 mi: %d\n",m>=n);

    /*
    Logical Operators: &&(ve) ||(veya)
    */

    int f=10;

    printf("\nBazi Onermeler:\n");
    printf("10>7 ve 10<13 : %d\n",f>7 && f<13);
    printf("10>7 ve 10<9 : %d\n",f>7 && f<9);
    printf("10>7 veya 10<13 : %d\n",f>7 || f<13);
    printf("10>7 veya 10<9 : %d\n",f>7 || f<9);
    printf("10>15 veya 10<5 veya 10=10 : %d\n\n",f>15 || f<5 || f==10);

    printf("Yukaridaki onermelerin degilleri (! ile);\n");
    printf("%d\n",!(f>7 && f<13));
    printf("%d\n",!(f>7 && f<9));
    printf("%d\n",!(f>7 || f<13));
    printf("%d\n",!(f>7 || f<9));
    printf("%d\n",!(f>15 || f<5 || f==10));




    return 0;
}
