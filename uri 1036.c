#include<stdio.h>
int main(){
    float a,b,c,x,y,z;
    scanf("%f%f%f",&a,&b,&c);

    z= (b * b) - (4 * a * c);

    if(z<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x = (-b + sqrt(z)) / (a+a);
        y = (-b - sqrt(z)) / (a+a);
        printf("R1 = %.5f\n",x);
        printf("R2 = %.5f\n",y);
    }
    return 0;
}
