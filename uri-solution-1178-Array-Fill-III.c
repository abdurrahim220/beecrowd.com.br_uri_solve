#include<stdio.h>
int main()
{
    int i,N[100];
    double n;
    scanf("%lf",&n);
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,n);
        n /= 2.0;
    }
    return 0;
}