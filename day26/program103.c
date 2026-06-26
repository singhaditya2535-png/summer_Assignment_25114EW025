#include <stdio.h>
int main(){
    int choice,pin=1234,enteredpin;
    float balance=1000000.0,amount;

    printf("=== ATM Simulation ===\n");
    printf("Enter your 4-digit pin: ");
    scanf("%d",&enteredpin);

    if(enteredpin!=pin){
        printf("Incorrect PIN! Access Denied.\n");
    
    return 0;
}
do{printf("\n ===AIM Menu===\n");
    printf("1.check balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("Current balance: Rs.%.2f\n",balance);
        break;
        case 2:
        printf("Enter amount to deposit: ");
        scanf("%f",&amount);
        balance+=amount;
        printf("Deposit Successful.\n");
        printf("updated Balance: Rs.%.2f\n",balance);
        break;
        case 3:
        printf("Enter amount to withdraw: ");
        scanf("%f",&amount);
        if(amount<=balance){
            balance-=amount;
            printf("Withdrawal Successful.\n");
            printf("Remaining Balance: Rs.%.2f\n",balance);
        }
        else{
            printf("Insufficient Balance!\n");
        }
        break;
        case 4: 
        printf("Thank you for using the ATM.\n");
        break;
        default: 
        printf("Invalid choice!\n");
    }

}
while(choice!=4);
return 0;
}