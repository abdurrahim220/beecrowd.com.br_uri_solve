#include<stdio.h>
int main()
{
    int n,i,a_m;
    int C,R,S,Total;
    C = R = S = Total = 0;
    char t_p;
    scanf("%d",&n);
   for(i=0; i<n; i++)
   // while(n--)
    {
        scanf("%d %c",&a_m,&t_p);
        if('C'==t_p) C +=a_m;
        else if('R'==t_p) R +=a_m;
        else if('S'==t_p) S +=a_m;
        Total +=a_m;
    }

    printf("Total: %d cobaias\n",Total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",(C*100.00)/Total);
    printf("Percentual de ratos: %.2f %%\n" ,(R*100.00)/Total);
    printf("Percentual de sapos: %.2f %%\n" ,(S*100.00)/Total);
    return 0;
}
