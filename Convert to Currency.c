#include<stdio.h>
#include<conio.h>

void main()
{
    double tk,doller,rupie,kuwaiti_dinar;

    int choice ;

        printf("\n\n***** WelCome to Rahim's Currency Converter *****");
        printf("\n\n 1.Tk -> Doller!!");
        printf("\n\n 2.Tk -> Rupie!!");
        printf("\n\n 3.Tk -> kuwaiti_dinar!!");

        printf("\n\n 4.Doller -> Tk!!");
        printf("\n\n 5.Doller -> Rupie!!");
        printf("\n\n 6.Doller -> kuwaiti_dinar!!");

        printf("\n\n 7.Rupie -> Tk !!");
        printf("\n\n 8.Rupie -> Doller !!");
        printf("\n\n 9.Rupie -> kuwaiti_dinar!!");

        printf("\n\n 10.kuwaiti_dinar -> Tk!!");
        printf("\n\n 11.kuwaiti_dinar -> Rupie!!");
        printf("\n\n 12.kuwaiti_dinar -> Doller!!");
        printf("\n\n 13. Exit");

        printf("\n\n Enter Your choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter Your TK amount = ");
            scanf("%lf",&tk);
            doller = (tk / (88.8));
            printf("The Currency In Doller = %.2lf",doller);
            break;

            case 2:printf("Enter Your TK amount = ");
            scanf("%lf",&tk);
            rupie = tk / (0.87);
            printf("The Currency In Rupie = %.2lf",rupie);
            break;

            case 3:printf("Enter Your TK amount = ");
            scanf("%lf",&tk);
            kuwaiti_dinar = tk / 290.91;
            printf("The Currency In Doller = %.2lf",kuwaiti_dinar);
            break;

            case 4:printf("Enter Your Doller amount = ");
            scanf("%lf",&doller);
            tk = doller * 88.81;
            printf("The Currency In tk = %.2lf",tk);
            break;

            case 5:printf("Enter Your Doller amount = ");
            scanf("%lf",&doller);
            rupie = doller * 77.51;
            printf("The Currency In Rupie = %.2lf",rupie);
            break;

            case 6:printf("Enter Your Doller amount = ");
            scanf("%lf",&doller);
            kuwaiti_dinar = (doller / (0.31));
            printf("The Currency In Kuwaiti_dinar = %.2lf",kuwaiti_dinar);
            break;

            case 7:printf("Enter Your Rupies amount = ");
            scanf("%lf",&rupie);
            tk = (rupie / (0.87));
            printf("The Currency In TK = %.2lf",tk);
            break;

            case 8:printf("Enter Your Rupies amount = ");
            scanf("%lf",&tk);
            doller = rupie / 75;
            printf("The Currency In Doller = %.2lf",doller);
            break;

            case 9:printf("Enter Your Rupie amount = ");
            scanf("%lf",&rupie);
            kuwaiti_dinar = rupie / 253.27;
            printf("The Currency In Kuwaiti_Dinar = %.2lf",kuwaiti_dinar);
            break;

            case 10:printf("Enter Your kuwaiti_dinar amount = ");
            scanf("%lf",&kuwaiti_dinar);
            tk = kuwaiti_dinar * 290.91;
            printf("The Currency In Bangladeshi TK = %.2lf",tk);
            break;

            case 11:printf("Enter Your kuwaiti_dinar amount = ");
            scanf("%lf",&kuwaiti_dinar);
            rupie = kuwaiti_dinar * 253.27;
            printf("The Currency In Rupie = %.2lf",rupie);
            break;

            case 12:printf("Enter Your kuwaiti_dinar amount = ");
            scanf("%lf",&kuwaiti_dinar);
            doller = kuwaiti_dinar / 3.27;
            printf("The Currency In Doller = %.2lf",doller);
            break;

        }



        return 0;

}
