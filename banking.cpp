#include<iostream>
#include<string.h>

double balance = 0;

void deposit(){
    double amount;
    std::cout<<"\nEnter the deposit amount : ";
    std::cin>>amount;
    balance += amount;
    std::cout<<"\nDeposit finished successfully";
    std::cout<<"\nAvailable balance = "<<balance;
}
void withdraw(){
    double amount;
    std::cout<<"\nEnter amount to withdraw : ";
    std::cin>>amount;
    if(balance >= amount){
        balance -= amount;
        std::cout<<"\nTransaction completed successfully\nAvailable balance = "<<balance;
    }else{
        std::cout<<"\nInsufficient Funds Available balance = "<<balance;
    }

}
void checkBalance(double amount){
    std::cout<<"\n\nAvailable balance = "<<amount;
}
bool exit(){
    std::cout<<"\nThank you for visiting....";
    return true;
}

int main(){

    int choice;
    bool isTrue = false;
    std::cout<<"--------Welcome to Bank--------";
    while(isTrue == false){
    std::cout<<"\nChoose an operation"<<std::endl;
    std::cout<<"1. Deposit";
    std::cout<<"\n2. Withdraw";
    std::cout<<"\n3. Check Balance";
    std::cout<<"\n4. Exit"<<std::endl;
    std::cin>>choice;

    switch (choice)
    {
    case 1:

        deposit();
        break;

    case 2:
        withdraw();
        break;

    case 3:
        checkBalance(balance);
        break;

    case 4:
        isTrue = exit();
        break;

    default:
        std::cout<<"\nInvalid option";
        break;
    }
    char yesOrNo;
    bool ok = true;
   while((yesOrNo == 'Y' || yesOrNo == 'y' || yesOrNo == 'N' || yesOrNo == 'n') && ok == true){


    if (choice == 4){
        ok = false;
    }
    std::cout<<"Do you want to continue (Y or N) : ";
    std::cin>>yesOrNo;

    if(yesOrNo == 'Y' || yesOrNo == 'y'){
        isTrue = false;
        ok = false;
    }
    else if(yesOrNo == 'N' || yesOrNo == 'n'){
        isTrue = true;
        ok = false;
    }
    else{
        std::cout<<"invalid Option";
     }
   }
    }
    return 0;
}
