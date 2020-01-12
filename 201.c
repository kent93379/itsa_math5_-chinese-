#include<stdio.h>

int main()
{
    int a,b,a100,a10,a1;
    while(scanf("%d",&a)!=EOF)
    {
        b=a;
        a100=a/100;
        a=a%100;
        a10=a/10;
        a1=a%10;
        //printf("%d %d %d\n",a100,a10,a1);
        a100=a100*a100*a100;
        a10=a10*a10*a10;
        a1=a1*a1*a1;
        //printf("%d %d %d",a100,a10,a1);
        //printf("b=%d\n",b);
        if((a100+a10+a1)==b)
            printf("1\n");
        else
            printf("0\n");
    }
}
