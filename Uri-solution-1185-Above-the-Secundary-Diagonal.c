#include<stdio.h>
int main()
{
    double N[12][12],sum;
    char o[2];
    scanf("%s",&o);
    int i,j,n=11;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",& N[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<n;j++)
            sum += N[i][j];
        n--;    
    }

    if(o[0] == 'S')printf("%.1lf\n",sum);
    else if(o[0] == 'M')printf("%.1lf\n",sum/66.0);

    return 0;

}