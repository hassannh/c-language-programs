#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    float dh ,euro ,dollar ;


    printf("entre votre argent en dh : ");
    scanf("%f" ,&dh);

    printf("choise une option \n dh vers euro :1 \n dh vers dollar :2\n");
    scanf("%d" ,&i);

    if(i == 1)
    {
        euro = dh * 96/1000;
        printf("votre argent est %f  euro" ,euro);
    }

 if(i == 1)
    {
        euro = dh * 96/1000;
        printf("votre argent est :%f  dollar" ,euro);
    }
 else if(i == 2)
    {
        dollar = dh * 11/100;
        printf("votre argent est :%f " ,dollar);
    }

        return 0;
}
