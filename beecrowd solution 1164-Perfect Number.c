#include<stdio.h>
int main()
{
    int i,n,x,j,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        k=0;
        scanf("%d",&x);
        for(j=1; j<x; j++)
        {
            if(x%j==0)k+=j;
        }
        if(k==x)printf("%d eh perfeito\n",x);
        else printf("%d nao eh perfeito\n",x);

    }
    return 0;
}
