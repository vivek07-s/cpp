#include<iostream>
using namespace std;
class bill{
    private:
    string name;
    int unit;
    double amount;

    public:
    void setdata(){
        cout<<"enter the name of the customer:";
        getline(cin,name);
        cout<<"enter the unit consumed by the customer :";
        cin>>unit;
    }
    void display(){

    }

    void calculate(){
        if(unit>0 && unit <100){
            amount=(unit*60)+50;
        }
        else if (unit>100 && unit<200){
            amount=(unit*80)+50;
        }
        else{
            amount=(unit*90)+50;
        }

    void balance(){
            if (amount>300)
            {
                amount+=.15
            }
            
    }
    }
}