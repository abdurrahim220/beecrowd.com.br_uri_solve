#include<stdio.h>
int main()
{
    int i, x, z, s_m=0,c=1;
    scanf("%d %d",&x, &z);
    while(z<=x)scanf("%d",&z);
    for(i=x; i<=z; i++)
    {
        s_m +=i;

        if(s_m>z)break;
        c++;
    }

    printf("%d\n",c);
    return 0;

}
