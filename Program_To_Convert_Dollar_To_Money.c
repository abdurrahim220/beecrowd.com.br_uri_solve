//Write a program to convert dollar to money.

//#include<stdio.h>
//int main()
//{
//    int
//}
//We develop a C program to Convert Currency Rupees to Dollars, Dollars to Rupees, Pound to Rupees, Euro to rupees and Kuwaiti Dinar to Rupees.

#include<stdio.h>
#include<conio.h>
void main()
{
  float dollar, inr, rupees;
  int ch;
  //clrscr();
   do
   {
   printf("\n\n***** WelCome to Webeduclick Currency Converter *****");
   printf("\n\n 1.Rupees -> Dollar");
   printf("\n\n 2.Dollar -> Ruppes");
   printf("\n\n 3.Pound -> Ruppes");
   printf("\n\n 4.Euro -> Ruppes");
   printf("\n\n 5.Kuwaiti Dinar -> Ruppes");
   printf("\n\n 6. Exit");
   printf("\n\nEnter your choice = ");
   scanf("%d",&ch);
   switch(ch)
    {
    case 1:printf("\n\nEnter the currency in Rupees = ");
    scanf("%f",&rupees);
    dollar=rupees/75;
    printf("\n\nThe currency in dollar is = %.2f$",dollar);
    break;
    case 2:printf("\n\nEnter the currency in Dollar = ");
    scanf("%f",&rupees);
    inr=rupees*65;
    printf("\n\nThe currency in Ruppes is = %.2f",inr);
    break;
    case 3:printf("\n\nEnter the currency in Pound = ");
    scanf("%f",&rupees);
    inr=rupees*100;
    printf("\n\nThe currency in Ruppes is = %.2f",inr);
    break;
    case 4:printf("\n\nEnter the currency in Euro = ");
    scanf("%f",&rupees);
    inr=rupees*85;
    printf("\n\nThe currency in Ruppes is = %.2f",inr);
    break;
    case 5:printf("\n\nEnter the currency in Kuwaiti Dinar = ");
    scanf("%f",&rupees);
    inr=rupees*240;
    printf("\n\nThe currency in Ruppes is = %.2f",inr);
    break;
    case 6:exit(0);
    }
  }
while(ch<4);
getch();
}
