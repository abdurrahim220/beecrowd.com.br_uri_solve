#include<stdio.h>
int main()
{
    int i,x,s;

    while(1)
    {
        s=0;
        scanf("%d",&x);
        if(x==0)break;
        if(x%2!=0)x++;
        for(i=0; i<5; i++)
        {
            s +=x;
            x +=2;

        }
        printf("%d\n",s);

    }

    return 0;
}
