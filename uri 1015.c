#include <stdio.h>

int main() {

   double x1,y1,x2,y2,dist;
   scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
   dist=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   printf("%.4lf",dist);

    return 0;
}
