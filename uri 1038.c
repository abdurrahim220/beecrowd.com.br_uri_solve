#include<stdio.h>
int main()
{

    int x, y;
    float snaks;
    scanf("%d%d",&x, &y);
    float arr[5] = {4.00,4.50,5.00,2.00,1.50};

    snaks = arr[x-1]*y ;

    printf("Total: R$ %.2f"\n,snaks);
    return 0;
}
