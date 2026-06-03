#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    char sec;
    int roll_no;
    int marks;
    int age;

    public:
    void setdata(){
        cout<<"enter the name of student :";
        getline(cin,name);
        cout<<"enter the section of student :";
        cin>>sec;
        cout<<"enter the roll no of student :";
        cin>>roll_no;
        cout<<"enter the marks of students :";
        cin>>marks;
        cout<<"enter the age of student :";
        cin>>age;
    }

    void display(){
        cout<<"name of student is "<<name<<endl;
        cout<<"section of student is "<<sec<<endl;
        cout<<"roll no of student is "<<roll_no<<endl;
        cout<<"marks of student is "<<marks<<endl;
        cout<<"age of student is "<<age<<endl;
    }
};

class faculty{
    protected:
    string name;
    int age;
    string department;

    public:
    void setfaculty(){
        cout<<"Enter name of faculty :";
        getline(cin,name);
        cout<<"enter age of faculty :";
        cin>>age;
        cout<<"enter the department of the faculty ";
        getline(cin,department);
    }

    void  display(){
        cout<<"name of the faculty is :"<<name<<endl;
        cout<<"age of the faculty is :"<<age<<endl;
        cout<<"department of faculty is :"<<department<<endl;
    }
};

class person : public student, public faculty{
            public :
            void show (){
                cout<<"age of student is "<<student::age<<endl;
                cout<<"age of faculty is "<<faculty::age<<endl;

                cout<<"display studentts :";
                student::display();

                cout<<"display faculty :";
                faculty::display();
            }
};

int main(){
person p;
p.setdata();
p.setfaculty();
p.show();
}