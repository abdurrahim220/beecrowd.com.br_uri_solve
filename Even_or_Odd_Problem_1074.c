#include<stdio.h>
int main()
{
    int T,n,i;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&n);
        if(n%2==0 && n>0)
            printf("EVEN POSITIVE\n");
        else if(n%2==0 && n<0)
            printf("EVEN NEGATIVE\n");
        else if((n%2==1 || n%2==-1) && n>0)
            printf("ODD POSITIVE\n");
        else if ((n%2==1 || n%2==-1) && n<0)
            printf("ODD NEGATIVE\n");
        if(n==0)printf("NULL\n");


    }
    return 0;
}
