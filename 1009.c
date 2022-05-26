#include<stdio.h>
int main(){
    char sellers_name[50];
    double fixed_salary,sales_total,TOTAL;
    scanf("%s",&sellers_name);
    scanf("%lf %lf",&fixed_salary,&sales_total);

    TOTAL = fixed_salary + sales_total * .15;

    printf("TOTAL = R$ %.2lf\n",TOTAL);

}
