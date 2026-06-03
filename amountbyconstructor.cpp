#include<iostream>
using namespace std;
class bank{
    private:
    double balance;
    public:
    bank(double bal){
        balance=bal;
    }
    void deposit(){
        double amount;
        cout<<"enter amount to be deposited :";
        cin>>amount;
        balance+=amount;
        cout<<"amount deposited :"<<amount<<endl;

    }
    void withdrawn(){
        double amount;
        cout<<"enter amount to be withdrawn:";
        cin>>amount;
        if(amount<=balance){
            balance-=amount;
            cout<<"amount withdrawn:"<<amount<<endl;
        }
        else{
            cout<<"insufficiant balance "<<endl;
        }
    }
    void display(){
        cout<<"current balance is :"<<balance<<endl;
    }
};
int main(){
    double initial;
    cout<<"enter initial balance :";
    cin>>initial;
    bank b1(initial);

    int choice;
    while(1){
        cout<<"enter your choice ";
        cout<<"1. for deposit /n 2. for withdrwal /n 3. for display /n 4. for exit"<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:b1.deposit();
            break;
            case 2:b1.withdrawn();
            break;
            case 3:b1.display();
            break;
            case 4:exit(0);
            break;
            default:cout<<"invalid choice "<<endl;

    }
    
}
return 0;
}
