#include<iostream>
using namespace std;

class Atm
{
private:

   int pin=2000;
   int balance=2500;

public:

int get_pin()
{
 return pin;
}

void withdraw(int amt)
{
 if(amt>0)
{
    if(amt>balance)
    {
     cout<<"Insufficient Funds"<<endl;
    }
    else
    {
        balance = balance-amt;
         cout<<"Thank you.You have withdrawn "<<amt<<" Successfully"<<endl;
         cout<<"Your Balance After withdrawl is Rs."<<balance<<endl;
    }
 }
 else
{
        cout<<"Please Enter a valid amount\n";
}
}

void deposit(int amt)
{
    if(amt>0)
    {
        balance = balance+amt;
        cout<<"Thank you.You have deposited "<<amt<<" Successfully"<<endl;
        cout<<"Your Balance After deposit is Rs."<<balance<<endl;
    }
    else
    {
        cout<<"Please Enter a valid amount"<<endl;
    }
}
void checkBalance()
  {
   cout<<"Hi Sir!"<<endl;
   cout<<"Your Balance is Rs."<<balance<<endl;
   cout<<"                  "<<endl;
   cout<<"                  "<<endl;
   
  }
};
int main()
{
while(1)
{
int cardpin;
static int count=0;
cout<<"*******************************\n";
cout<<"\n";
cout<<"\n";
cout<<"Welcome to XYZ Bank Atm"<<endl;
cout<<"\n";
cout<<"\n";
cout<<"*******************************\n";
cout<<"Card Reading.....\n"<<"Done\n";
cout<<"Please Enter Card Pin:"<<endl;
cin>>cardpin;
Atm user1;
if(user1.get_pin()==cardpin)
{
    int choice;
    
    int withdraw_amt;
    int deposit_amt;

    cout<<"*******************************************"<<endl;
    cout<<"Hi User,"<<endl;
    label:
    cout<<"Here are the Banking Services available:"<<endl;
    cout<<"                       "<<endl;
    cout<<"Please select the service you want?:"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Withdraw money"<<endl;
    cout<<"3.Deposit money"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        user1.checkBalance();
        break;
    case 2:
        cout<<"Enter the amount you want to withdraw?"<<endl;
        cin>>withdraw_amt;
        user1.withdraw(withdraw_amt);
        break;
    case 3:
        cout<<"Enter the amount to you want to deposit?"<<endl;
        cin>>deposit_amt;
        user1.deposit(deposit_amt);
        break;
    case 4:
        cout<<"Thank you!"<<endl;
        cout<<"Have a nice day.";
        exit(0);
    default:
        break;
    }
int test;
cout<<"If You want to go back,Press 1"<<endl;
cin>>test;
if (test==1)
  goto label;

}
else
{
    count++;
    cout<<"! You have entered wrong pin !"<<endl;
    cout<<"You have "<<3-count<<" attempts left.."<<endl;
    if(count==3)
    {
        cout<<"Sorry your card is blocked!"<<endl;
        cout<<"Please visit the XYZ main branch...."<<endl;
        exit(0);
    }
}

}

return 0;
}