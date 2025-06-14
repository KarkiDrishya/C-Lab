/*Write a program that takes balance of a user’s account as input. It should then ask the user how
much amount he wants to withdraw from his account. The program should take this amount as
input and deduct from the balance. Similarly it should ask the user how much amount he wants
to deposit in his account. It should take this amount as input and add to the balance. The
program shall display the new balance after amount has been withdrawn and deposited.
Note: Your program should have a check on balance and amount being withdrawn. Amounts
greater than balance cannot be withdrawn i.e. balance cannot be negative.*/
#include<iostream>
using namespace std;
    class ATM{
    public : 
    int balance = 60000;
    int withdraw,deposit;
    int output_withdraw,output_deposit;
    public : 
    int withrdaw_amt(int withdraw_input)
        {
            if(balance>withdraw_input)
            {
            withdraw = withdraw_input;
            output_withdraw = balance-withdraw;
            balance=balance-withdraw;
            
            cout<<"You have withdrawn Rs "<<withdraw<<endl;
            cout<<"You have Rs"<<balance<<" left in your account."<<endl;
            }

            else
            {
                cout<<"Insufficient balance, cannot withdraw"<<endl;
            }
        }
    int deposit_amt(int deposit_input)
    {
            deposit=deposit_input;
            output_deposit=balance+deposit;
            balance=balance+deposit;

            cout<<"You have depostire Rs"<<output_deposit<<" in your account"<<endl;
            cout<<"Your total balance is now Rs"<<balance<<endl;
    }
};
int main()
{
    ATM a1,a2;
    int choice,withdraw_input,deposit_input;

    cout<<" You have "<< a1.balance<<" amount in your bank "<<endl;

    cout<<"Do you want to withdraw or depost? "<<endl;
    cout<<" Press 1 if you want to withdraw, press 2 if you want to deposit : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:

        cout<<"Enter the amount you want to withdraw : "<<endl;
        cin>>withdraw_input;

        a1.withrdaw_amt(withdraw_input);
        
        break;

    case 2 :

        cout<<"Enter the amount you want to deposit : "<<endl;
        cin>>deposit_input;
        a1.deposit_amt(deposit_input);
        
        break;

    default:
        cout<<"You did not choose between 1 and 2 "<<endl;
        break;
    }
}



    

