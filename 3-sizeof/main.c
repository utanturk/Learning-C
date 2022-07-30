#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=781387913;
    printf("Sayi: %d\n\n",sayi);


    printf("Int hafizada %d byte kadar yer tutar\n",sizeof(int));
    printf("Float hafizada %d byte kadar yer tutar\n",sizeof(float));
    printf("Double hafizada %d byte kadar yer tutar\n",sizeof(double));
    printf("Char hafizada %d byte kadar yer tutar\n\n",sizeof(char));


    printf("Sayi hafizada %d byte kadar yer tutar\n",sizeof(sayi));

    return 0;
}
