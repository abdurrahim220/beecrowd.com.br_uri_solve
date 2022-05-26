#include<stdio.h>
int main(){
    double r,pi,VOLUME;
    pi=3.14159;
    scanf("%lf",&r);
    VOLUME = (4/3.0) * pi * r * r * r;
    printf("VOLUME = %.3lf\n", VOLUME);
    return 0;
}
