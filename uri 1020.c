#include<stdio.h>
int main(){
    int year,month,days;
    scanf("%d",&days);
    year=0;
    month=0;

    year=days/365;
    days=days%365;
    month=days/30;
    days=days%30;

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);
    return 0;
}
