#include<stdio.h>
int main()
{
    int w_d,x_h,y_m,z_s,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,date;
    char dia1[5], dia2[5], del[5];
    scanf("%s %d %d %s %d %s %d",&dia1,&d1,&h1,&del,&m1,&del,&s1);
    scanf("%s %d %d %s %d %s %d",&dia2,&d2,&h2,&del,&m2,&del,&s2);

    st1 = s1 + m1 * 60 + h1 * 60 * 60 + d1 * 24 * 60 * 60;
    st2 = s2 + m2 * 60 + h2 * 60 * 60 + d2 * 24 * 60 * 60;

    date = st2 - st1;

    w_d = date/(24 * 60 * 60);
    x_h = (date - w_d * 24 * 60 * 60)/(60*60);
    y_m = (date - w_d * 24 * 60 * 60 - x_h*60*60)/(60);

    z_s= date - w_d * 24 * 60 * 60 - x_h*60*60 - y_m * 60;

    printf("%d dia(s)\n",w_d);
    printf("%d hora(s)\n",x_h);
    printf("%d minuto(s)\n",y_m);

    printf("%d segundo(s)\n",z_s);

    return 0;

}
