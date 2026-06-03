#include<iostream>
using namespace std;
 class car{
    public :
     virtual void start (){
        cout<<"start";
    }
 };

class bmw : virtual public car{
    public:
     void start(){
        cout<<"start bmw";
    }
};
class alto : virtual public car{
    public:
     void start(){
        cout<<"start alto";
    }
};

class german : public alto, public bmw{
    public:
    void start(){
        cout<<"start german";
    }
};

 

 int main(){
    german g;
    g.start();
    
    car* c = &g;
    c->start();
 }
