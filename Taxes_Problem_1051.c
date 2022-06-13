#include<stdio.h>
int main()
{
    double sal;
    scanf("%lf", &sal);

    if(sal<=2000.00)
    {
        printf("Isento");
    }

    else if (sal >= 2000.01 && sal <= 3000.00)
    {
        printf("R$ %.2lf\n", (sal - 2000.00)*0.08);
    }

    return 0;
}
