#include<stdio.h>
int main()
{
    int N[100],i,x;
    scanf("%d",&x);
    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,x);
        x += x;
    }
    return 0;
}
