#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* bos bir diziye 3 terim gireceksin. her terimi girdiginde girdigin terim ekrana bastirilacak veya tum terimleri girdikten sonra hepsi ekrana
    bastirilacak. bunu for ile while ile ve do while ile yapacaksin. */

    int sayilarim[3];
    int i;

    for(i=0;i<3;i++)

    {
        scanf("%d",&sayilarim[i]);
        printf("%d\n",sayilarim[i]);
    }

    printf("\n\n");


     for(i=0;i<3;i++)

    {
        printf("%d\n",sayilarim[i]);
    }

    printf("\n\n");

    i=0;

    while(i<3)

    {
        scanf("%d",&sayilarim[i]);
        printf("%d\n",sayilarim[i]);
        i++;
    }

    printf("\n\n");


    i=0;

    while(i<3)

    {
        printf("%d\n",sayilarim[i]);
        i++;
    }


    printf("\n\n");

    i=0;

    do
    {
        scanf("%d",&sayilarim[i]);
        printf("%d\n",sayilarim[i]);
        i++;
    }while(i<3);



    printf("\n\n");


    i=0;


    do
    {
        printf("%d\n",sayilarim[i]);
        i++;
    }while(i<3);


    return 0;
}
