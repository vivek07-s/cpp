#include<iostream>
using namespace std;
 class vivek{
    private:
    string name;
    int rollno;
    int marks;

    public:
    //constructor paramaterized using this operator 
    vivek(string name,int rollno,int marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }

    void display(){
        cout<<name<<rollno<<marks<<endl;
    }
    // copy constructor 
    vivek( vivek &b){
        name=b.name;
        rollno=b.rollno;
        marks=b.marks;
    }
 };
 int main(){
    string name;
    int rollno,marks;
    cout<<"enter name :";
    getline(cin,name);
    cout<<"enter rollno :";
    cin>>rollno;
    cout<<"enter marks :";
    cin>>marks;
    //constructor me parameter pass krna h jb user se input lete ho 
    vivek v(name,rollno,marks);
    v.display();
    vivek v1(v);//copy constructor ka object jo v object ki value copy krra h 
    v1.display()        
    return 0;
 } 





