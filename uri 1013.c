#include<stdio.h>
int main(){
    int a,b,s,max_value;
    scanf("%d%d%d",&a,&b,&s);
    max_value=a;
    if(b>max_value)
        max_value=b;
    if(s>max_value)
        max_value=s;

    printf("%d eh o maior\n",max_value);
    return 0;

}
