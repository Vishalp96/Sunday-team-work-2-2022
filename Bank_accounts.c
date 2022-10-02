#include<stdio.h>

typedef struct Bank_of_hdfc
{

    char Bank[30];
    char Name[30];
    int account;
    float amt;
    char PanNo[30];
    int aadhar;
    int Phone;


} hdfc;
hdfc mem[2];
int phn,ph1,ph2;


int main()
{

    printf("\n----NOTE: In this bank we have 2 members only-----\n");
    printf("\nEnter the member account details \n\n");
    for(int i=1; i<=2; i++)
    {
        printf("Enter the details of Customer %d\n\n",i);

        printf("\nEnter the bank name:\n");
        scanf("%s",&mem[i].Bank);

        printf("\nEnter the Account holder name:\n");
        scanf("%s",&mem[i].Name);

        printf("\nEnter the Account number is:\n");
        scanf("%s",&mem[i].account);

         printf("\nEnter the amount:\n");
        scanf("%f",&mem[i].amt);

        printf("\nEnter the PAN Number:\n");
        scanf("%s",&mem[i].PanNo);

        printf("\nEnter the Aadhar Number:\n");
        scanf("%s",&mem[i].aadhar);

        printf("\nEnter the Phone Number:\n");
        scanf("%s",&mem[i].Phone);


        printf("\n\n\n\n");


//printf("Enter the Bank name: %s\nAccount holder name is: %s\nAccount number is: %d\nPAN Number is: %s\nAadhar Number is: %d\nPhone Number is: %d\n",mem[i].Bank,mem[i].Name,mem[i].account,mem[i].PanNo,mem[i].aadhar,mem[i].Phone);



    }

    printf("\n\n-----Please Confirm the phone Number of Member 1-----:\n");
    scanf("%d",&ph1);
    printf("-----Please Confirm the phone Number of Member 2-----:\n");
    scanf("%d",&ph2);
    for(int i=0; i<3; i++)
    {

        printf("\n\nEnter the Phone Number to get Bank User details:\n");
        scanf("%d",&phn);

        if(phn==ph1)
        {

            printf("\n\nEnter the Bank name: %s\nAccount holder name is: %s\nAccount number is: %d\nYour Account Balance is: %f\nPAN Number is: %s\nAadhar Number is: %d\nPhone Number is: %d\n",mem[1].Bank,mem[1].Name,mem[1].account,mem[1].amt,mem[1].PanNo,mem[1].aadhar,mem[1].Phone);

        }
        else if(phn==ph2)
        {
            printf("\n\nEnter the Bank name: %s\nAccount holder name is: %s\nAccount number is: %d\nYour Account Balance is: %f\nPAN Number is: %s\nAadhar Number is: %d\nPhone Number is: %d\n",mem[2].Bank,mem[2].Name,mem[2].account,mem[1].amt,mem[2].PanNo,mem[2].aadhar,mem[2].Phone);
        }
        else
        {
            printf("\n\nUser is not exists:\n");
        }
    }
}









