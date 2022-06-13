#include<stdio.h>
int main()
{
    int i,count=0;
    float a;
    for(i=0;i<6;i++){
        scanf("%f",&a);
        if( a>= 0) count++;
    }
    printf("%d valores positivos\n",count);

    return 0;

}
