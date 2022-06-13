#include<stdio.h>
int main()
{
    float data,sum=0;
    int count=0;
    for(int i=0; i<6; i++)
    {
        scanf("%f",&data);
        if( data> 0)
        {
            count++;
            sum += data;
        }

    }
    printf("%d valores positivos\n%.1f\n",count,sum/count);

    return 0;

}
