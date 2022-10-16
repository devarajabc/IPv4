#include<stdio.h>
int main(void)
{
    int n=0;
    for(int i=0;i<4;i++)
    {
        scanf("%2x",&n);
        printf("%d",n);
        if(i<3)
            printf(".");

    }
    return 0;
}