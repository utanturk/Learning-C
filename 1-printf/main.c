#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Merhaba Dunya\nMerhaba Dunya \n\n");
    printf("Ikinci bir printf actim \n\n");

    /*
    int(4 bytes) -> %d
    float(4 bytes) -> %f
    double(8 bytes) -> %lf
    char(1 byte) -> %c
    */

    int sayim=56;
    printf("%d\n\n",sayim);

    int sayim2;
    sayim2=45;
    printf("%d\n\n",sayim2);

    int sayim3,sayim4;
    sayim3=18;
    sayim4=19;

    printf("%d         %d\n\n",sayim3,sayim4);

    int sayim5=77, sayim6;
    sayim6=135;
    printf("%d %d\n\n",sayim5,sayim6);

    int sayim8=64, sayim9=62426;
    printf("%d%d\n\n",sayim8,sayim9);

    float sayim10=12.36, sayim11=18.74;
    printf("10.Sayim:%.2f\t11.Sayim:%.2f\n\n",sayim10,sayim11);

    char karakter='A';
    printf("Karakterim: %c\n\n",karakter);
    return 0;
}
