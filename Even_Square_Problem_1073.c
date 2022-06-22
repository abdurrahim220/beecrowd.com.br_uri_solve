
/*#include<stdio.h>
int main()
{
unsigned data,i;
scanf("%u",&data);
for(i=1; i<=data; i++)
{
    if(i%2==0)
    {
        printf("%u^2 = %u\n",i,i*i);
    }
}
}*/
#include<stdio.h>
void main()
{
    unsigned a,n;
    scanf("%u",&n);
    for(a=2; a<=n; a+=2)
    {
        printf("%u^2 = %u\n",a,a*a);
    }

}
