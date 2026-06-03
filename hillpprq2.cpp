#include<iostream>
#include<string>
using namespace std;
class onlineorder{
    string OrderId;
    string ProductName;
    int quantity;
    double pricePerUnit;
    public:
    onlineorder(string OrderId,string ProductName,int quantity,double PricePerUnit){
        this->OrderId=OrderId;
        this->ProductName=ProductName;
        this->quantity=quantity;
        this->pricePerUnit=PricePerUnit;

    }
        double gettotalorder(){
            return quantity*pricePerUnit;
        }
    void display(){
        cout<<"OrderId is :"<<OrderId<<endl;
        cout<<"ProductName is :"<<ProductName<<endl;
        cout<<"quantity is :"<<quantity<<endl;
        cout<<"pricePerUnit is :"<<pricePerUnit<<endl;
        cout<<"Total Price is :"<<quantity*pricePerUnit<<endl;
    }
};

int main(){
    string OrderId,ProductName;
    int quantity;
    double pricePerUnit;
    cout<<"enter order id :";
    getline(cin,OrderId);
    cout<<"enter product name:";
    getline(cin,ProductName);
    cout<<"enter quantity :";
    cin>>quantity;
    cout<<"enter price per unit:";
    cin>>pricePerUnit;
    onlineorder o(OrderId,ProductName,quantity,pricePerUnit);
    o.display();
    return 0;a
}