#include<iostream>
using namespace std;
class student{
    protected:

    string name;
    int rollno;
    char sec;

    public:
    void inputstudent(){
        cin.ignore();
        cout<<"enter the name:";
        getline(cin,name);
        cout<<"enter the roll number :";
        cin>>rollno;
        cout<<"enter the section of students :";
        cin>>sec;
    }

    void display(){
        cout<<"name of student is :"<<name<<endl;
        cout<<"roll number of student is :"<<rollno<<endl;
        cout<<"section of students is :"<<sec<<endl;
    }
};

class marks{
    protected:
    int sub1,sub2,sub3;

    public:
    void inputmarks(){
        cout<<"enter the marks of subject 1 :";
        cin>>sub1;
        cout<<"enter the marks of subject 2: ";
        cin>>sub2;
        cout<<"enter the marks of subject 3 :";
        cin>>sub3;
    }

    void display(){
        cout<<"marks of subject 1 is :"<<sub1<<endl;
        cout<<"marks of subject 2 is :"<<sub2<<endl;
        cout<<"marks of subject 3 is :"<<sub3<<endl;

    }
};

class school :public student, public marks{
        private:
        int total;
        float per;
        char grade;
        public:

        void cal(){
            total=sub1+sub2+sub3;
            per=(total*100)/300;

            if(per>90){
                grade='A';
            }
            else if (per<90 && per>80){
                grade='B';
            }
            else if(per<80 && per>70){
                grade='C';
            }
            else{
                grade='F';
            }
        }
        void display(){
            cout<<"total marks is :"<<total<<endl;
            cout<<"per of 3 subjects is :"<<per<<endl;
            cout<<"grade is "<<grade<<endl;
        }
};

int main(){
    school s;
    s.inputstudent();
    s.student::display();
    s.inputmarks();
    s.marks::display();
    s.cal();
    s.school::display();

    return 0;
}