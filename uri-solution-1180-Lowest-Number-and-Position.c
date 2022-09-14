#include<stdio.h>
int main()
{
    int i,c=0,n,v,p,b,a;

    scanf("%d %d",&n,&a);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&b);
        c++;

        if(i==0)
        {
            if(a<b) {v=a;p=c;}
            else {v=b;p=c;}
        }
        else 
        {
            if(b<v) {v=b;p=c;}
        }
    }
    printf("Menor valor: %d\n",v);
    printf("Posicao: %d\n",p);
    return 0;
}
