#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    char O[2];
    scanf("%s",&O);
    int i,j,o=1,m=11;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=o;j<m;j++)
            sum += N[i][j];
        
        m--; 
        o++;   
    }

    if(O[0] == 'S')printf("%.1lf\n",sum);
    else if(O[0] == 'M')printf("%.1lf\n",sum/30.0);

    return 0;
}