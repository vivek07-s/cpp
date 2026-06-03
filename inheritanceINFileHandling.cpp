#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
    protected:
    string name;
    int rollno;
    char sec;
    int age;

    public:
    void inputstudent(){
        cout<<"enter the name of student:";
        getline(cin,name);
        cout<<"enter the roll number :";
        cin>>rollno;
        cout<<"enter the section of student :";
        cin>>sec;
        cout<<"enter the age of student:";
        cin>>age;
    }
};

class faculty{
    protected:
    string name;
    int id;
    int age;
    string department;

    public:

    void inputfaculty(){
        cin.ignore();
        cout<<"enter the name of faculty :";
        getline(cin,name);
        cout<<"enter id of faculty :";
        cin>>id;
        cout<<"enter the age of faculty :";
        cin>>age;
        cin.ignore();
        cout<<"enter the department of faculty :";
        getline(cin,department);
    }
};

class person : public student,public faculty{
    public:
    void show(){
        
        ofstream fout;
    fout.open("temp.txt");
    fout<<student::name<<'\n';
    fout<<sec<<'\n';
    fout<<rollno<<'\n';
    fout<<student::age<<'\n';

    fout<<faculty::name<<'\n';
    fout<<id<<'\n';
    fout<<faculty::age<<'\n';
    fout<<department<<'\n';

    fout.close();

    ifstream fin;
    fin.open("temp.txt");
    fin>>student::name;
    cout<<"student name is "<<student::name<<endl;
    fin>>sec;
    cout<<"section is "<<sec<<endl;
    fin>>rollno;
    cout<<"roll no is "<<rollno<<endl;
    fin>>student::age;
    cout<<"student age is "<<student::age<<endl;
    fin>>faculty::name;
    cout<<"faculty name is "<<faculty::name<<endl;
    fin>>id;
    cout<<"faculty id is "<<id<<endl;
    fin>>faculty::age;
    cout<<"faculty age is "<<faculty::age<<endl;
    fin>>department;
    cout<<"department of faculty is "<<department<<endl;

    fin.close();
    }
};
int main(){
 person p;
 p.inputstudent();
 p.inputfaculty();
 p.show();
 return 0;
}