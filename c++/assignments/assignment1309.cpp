#include<iostream>
using namespace std;

class Account{
private:
string name;
char gender;
double amount=0;
int accountno;
static int acc_auto;

public:

void cre_acc(string n,char g,double a){
accountno=++acc_auto;
name=n;
gender=g;
amount=a;
cout<<name<<" your Account is created with acc "<<accountno;
// cout<<"\gender of Account holder "<<gender;
// cout<<"\Amount of Account holder "<<amount;
}
void deposit(double x){
if(x<0){
cout<<"\nPlease give positive amount";
}else{
amount=amount+x;
cout<<"\nyou deposited "<<x;
checkBalance();
}
}
bool withdraw(double x){
if(x<0){
cout<<"\nPlease give positive amount";

}else{
amount=amount-x;
if(amount<0){
cout<<"\nInsufficient balance ";
amount=amount+x;
}else{
  cout<<"\nyou withdraw "<<x;
  checkBalance();
}
}
}
void checkBalance(){

cout<<"\nHii "<<name<<" Your account no: "<<accountno<<" & Your account balance is: "<<amount;
}
int accounts(){
return accountno;
}
};
int Account::acc_auto=202400;

int main(){
 Account bank[100];
 int accounts=0;
 int acc_no,flag;
 double amount;
 Account a;
 int ch;
 string n;
 char g;
double amt;
do
{
    cout<<"\n---------------------------------------";
    cout<<"\n---------tadoba national  bank ---------";
    cout<<"\n---------------------------------------";
    cout<<"\n1. Create Account";
    cout<<"\n2. Deposite to Account";
    cout<<"\n3. Withdraw from Account";
    cout<<"\n4. Check Balance";
    cout<<"\n5. Transfer amount";
    cout<<"\n0. Exit";
    cout<<"\n---------------------------------------";
    cout<<"\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
           
            cout<<"\nEnter name:";
            cin>>n;
            cout<<"\nEnter gender:";
            cin>>g;
            while(1)
            {
                cout<<"\nEnter amount>=5000 to open account:";
                cin>>amt;
                if(amt>=5000)
                {
               
                    a.cre_acc(n,g,amt);
                    break;
                }
                cout<<"\nMinimum Amount to open account is 5000";    
            }
            bank[accounts++]=a;//account added to bank array
           
            break;
            case 2:
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].accounts()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].checkBalance();
                        cout<<"\nEnter amount to deposit:";
                        cin>>amount;
                        bank[i].deposit(amount);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                break;
               
            case 3:
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].accounts()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].checkBalance();
                        cout<<"\nEnter amount to withdraw:";
                        cin>>amount;
                        bank[i].withdraw(amount);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                   
                   
                break;
               
            case 4:
            cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].accounts()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].checkBalance();
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
                break;
               
            case 5:
            double amount1;
               cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].accounts()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].checkBalance();
                        cout<<"\nEnter amount to withdraw:";
                        cin>>amount1;
                        bank[i].withdraw(amount1);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                cout<<"\nAccount "<<acc_no<<" not found";
                   
                   
                cout<<"\nEnter Account number:";
                cin>>acc_no;
                flag=0;
                for(int i=0;i<accounts;i++)
                {
                    if(bank[i].accounts()==acc_no)
                    {
                        cout<<"\nAccount found:";
                        bank[i].checkBalance();
//                        cout<<"\nEnter amount to deposit:";
//                        cin>>amount;
                        bank[i].deposit(amount1);
                        flag=1;//found
                        break;
                    }
                }
                if(flag==0)
                    cout<<"\nAccount "<<acc_no<<" not found";
               break;


            case 0:
                    cout<<"Thanks for banking with us.....";
                    break;
            default:
                    cout<<"Wrong option selected";
                    break;
                }
   
 } while(ch!=0);
 return 0;


}
