#include <stdio.h>
#include <stdlib.h>

int main()
{
    // iki boyutlu bir dizi tanimlanip 3. satirin 2. sutunundaki elemanin yazdirilmasi.

    int diziler[4][2]={{3,5},{7,9},{8,6},{2,1}};
    printf("%d",diziler[2][1]);
    printf("\n\n");

    // 10x10 boyutunda iki boyutlu dizinin n. satir n. elemanlarinin 1 ile diger elemanlarinin 0 ile gösterilmesi.

    int matris[10][10];
    int i,j;

    for(i=0;i<10;i++)

    {
        for(j=0;j<10;j++)

        {
            if(i==j)

            {
                matris[i][j]=1;
            }

            else
            {
                matris[i][j]=0;
            }
        }
    }

    for(i=0;i<10;i++)

    {
        for(j=0;j<10;j++)

        {
            printf("%4d",matris[i][j]);
        }

        printf("\n");
    }

    printf("\n\n\n");

    // iki boyutlu dizilerin toplanip yeni bir iki boyutlu dizi olusturulmasi

    int dizi1[3][4]={{3,2,5,6},{1,4,7,8},{5,9,3,1}};
    int dizi2[3][4]={{6,8,1,2},{2,7,9,3},{8,4,5,7}};
    int dizi3[3][4];
    int x,y;

    printf("Matris 1: \n\n");

    for (x=0; x<3; x++)
    {
        for (y=0; y<4; y++)
        {
            printf("%4d",dizi1[x][y]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("Matris 2: \n\n");

    for (x=0; x<3; x++)
    {
        for (y=0; y<4; y++)
        {
            printf("%4d",dizi2[x][y]);
        }
        printf("\n");
    }

    printf("\n\n\n");


    for(x=0; x<3; x++)

    {
        for(y=0; y<4; y++)

        {
            dizi3[x][y] = dizi1[x][y] + dizi2[x][y];
        }

    }

    printf("Matris 3: \n\n");

    for(x=0; x<3; x++)
    {
        for(y=0; y<4; y++)

        {
            printf("%4d",dizi3[x][y]);
        }

        printf("\n");
    }


    // 3 boyutlu bos bir diziye eleman taniplanip tanimlanan elemanlarin gosterilmesi.

    int mat[2][3][2];
    int a,b,c;

    printf("\nLutfen 12 adet sayi giriniz: \n");

    for (a=0; a<2; a++)

    {
        for (b=0; b<3; b++)

        {
            for (c=0; c<2; c++)

            {
                scanf("%d",&mat[a][b][c]);
            }
        }
    }

    for (a=0; a<2; a++)

    {
        for (b=0; b<3; b++)

        {
            for (c=0; c<2; c++)

            {
                printf("mat[%d][%d]{%d] = %d\n",a,b,c,mat[a][b][c]);;
            }
        }
    }

    return 0;
}
