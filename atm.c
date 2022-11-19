#include <stdio.h>

unsigned long amount = 2000, depo, withd ;
int choice;
void main()
{

printf("******Welcome to Gniot Bank******\n");
printf("1. Check Balance \n");
printf("2.  Deposite Money\n"); 
printf("3. Withdraw Cash\n");
printf("4. Positive Message\n");


printf("Enter your choice: ");
scanf("%d",&choice);




switch (choice)
{
case 1:
    printf("\n You balace is %lu", amount);
    break;
case 2:
    printf("\n Enter the amount to Deposite: ");
    scanf("%lu",&depo);
    amount = amount + depo;
    printf("Your balace is %lu",amount);
    break;

case 3:
    printf("Enter to withdraw: ");
    scanf("%lu",&withd);
    if (amount < withd)
    {
        printf("Insuffient Balace");
    }

    else 
    {
        amount = amount - withd;
        printf("Collect the cash\n");
        printf("Your current balace is %lu",amount);
        
    }
    break;

    case 4:
    printf("Your are a Good Coder");
    break;

default:
    printf("Unknown choice");
    break;
}


}