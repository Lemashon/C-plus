#include <iostream>
using namespace std;
#include<iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do{
        cout << "***********************\n";
    cout <<"Enter your choice: \n";
    cout << "**********************\n";
    cout <<"1. show balance\n";
    cout <<"2. Deposit money\n";
    cout <<"1. show balance\n";
    cout <<"4. Withdraw money\n";
    cout <<"Exit\n";
    cin >> choice;
    
    cin.clear();
    fflush(stdin);

    switch (choice){
        case 1: showBalance(balance);
            break;
        case 2: balance += deposit();
            showBalance(balance);
            break;
        case 3: balance = withdraw(balance);
            showBalance(balance);
            break;
        case 4: cout <<"Thanks for visiting!\n";
            break;
    default: cout << "Invalid choice\n";
        break;
    }

    }while(choice !=4);



    return 0;
}
void showBalance(double balance){
    double deposit(){
        double amount = 0;
        cout << "Enter amount to be deposited: ";
        cin >> amount;

        if(amount > 0){
            return amount;
        }else{
            cout << "That's not a valid amount: ";
            return 0;
        }
    }

}
double withdraw(double balance){
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if(amount > balance)
    {
    cout << "Insufficient funds\n";
    return 0;
} else if(amount < 0){
    cout << "That's not a valid amount";
    return 0;
} else{
    return amount;
    }
}
