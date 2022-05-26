#include<stdio.h>
int main(){
    int num,work_hour;
    float salary,total_salary;
    scanf("%d%d%f",&num,&work_hour,&salary);
    total_salary = work_hour * salary;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f",total_salary);
    return 0;
}
