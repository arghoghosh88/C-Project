#include <stdio.h>
#include <string.h>

long long balance=0;

void AccName();
void AccPhNum();
void AccDateOfBirth();
void AccID_Card();
void AccPassword();
long long Deposit(long long amount);
long long FirstDiposit();
long long Withdraw(long long amount1);

int main(){
long long a;
    printf("Welcome to ABC bank\n");
    AccName();
    AccPhNum();
    AccDateOfBirth();
    AccID_Card();
    AccPassword();
    printf("Account Set Successfully!!\n");
    FirstDiposit();
    Withdraw(a);
    printf("Finally you have: %lld tk\n",balance);
    printf("Thanks to connected with us #ABC Bank");

}
void AccName(){
     printf("Create your account (!!)\n");

    char fullname[100];
    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Full name: %s\n", fullname);

}

void AccPhNum(){
char pnum[12];
    printf("Enter your phone number: ");
    scanf("%11s", pnum);
    getchar();

    char fullNum[20];
    strcpy(fullNum, "+88 ");
    strcat(fullNum, pnum);
    printf("Full phone number: %s\n", fullNum);
}

void AccDateOfBirth(){
    printf("\nEnter your date of birth: ");
    char dob[50];
    fgets(dob, sizeof(dob), stdin);
    printf("\nDate of birth: %s\n", dob);
}

void AccID_Card(){
    printf("Enter '1' if you have ID card, '0' if you don't: ");
    char s[5];
    fgets(s, sizeof(s), stdin);

    if (s[0] == '1')
    {
        char ID[20];
        printf("Enter your valid ID number: ");
        fgets(ID, sizeof(ID), stdin);
        printf("Your ID number: %s\n", ID);
    }
    else if (s[0] == '0')
    {
        char guardianID[20];
        printf("Enter guardian's valid ID number: ");
        fgets(guardianID, sizeof(guardianID), stdin);
        printf("Guardian's ID number: %s\n", guardianID);
    }
    else
    {
        printf("Invalid input for ID card status.\n");
    }
}

void AccPassword(){
    while (1)
    {
        char pass[100];
        char pass1[100];

        printf("Enter your password: ");
        fgets(pass, sizeof(pass), stdin);

        printf("Confirm your password: ");
        fgets(pass1, sizeof(pass1), stdin);

        if (strcmp(pass, pass1) == 0)
        {
            printf("Password set successfully.\n");
            break;
        }
        else
        {
            printf("Passwords don't match. Please try again.\n");
        }
    }
}

long long Deposit(long long amount){

    return balance + amount;
}


long long FirstDiposit(){
    printf("\nFirstly you have to deposit a amount to your account more than 1000 tk\n");
    long long amount;
    
    while(1){
    printf("Give the money what you want to add:");
    scanf("%lld",&amount);
   if(amount>=1000){
     balance += amount;
     printf("your balance is = %lld tk\n",balance);
     break;
   }
   else{
    printf("That is not enough.\nPlease give more than 1000 tk\n");
   }
    }
    return balance;
}

long long Withdraw(long long amount1){
    printf("\nGive the money that you want to withdraw: ");
    
    while(1){
        scanf("%lld",&amount1);
        if(amount1>0&&amount1<balance){
            balance -= amount1;
            printf("Your new balance is : %lld tk\n",balance);
            break;
        }
        
        else{
            printf("Insufficient balance.\nPlease give a small amount: ");
        }
    }
return balance;

}