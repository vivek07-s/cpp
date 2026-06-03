#include<iostream>
#include<fstream>
using namespace std;
class student{
    protected:
    string name;
    int rollno;
    int age;
    float sub1,sub2,sub3;

    public:
    void inputstudent{
        cout<<"enter name of student :";
        getline(cin,name);
        cout<<"enter roll number of student: ";
        cin>>rollno;
        cout<<"enter the age of student :";
        cin>>age;
        cout<<"enter marks of subb 1 : ";
        cin>>sub1;
        
        cout<<"enter marks of subb 2 : ";
        cin>>sub2;
        
        cout<<"enter marks of subb 3 : ";
        cin>>sub3;
        
        
    }
};

class result : public student{
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
            else if(per>80){
                grade='B';
            }
            else if(per>70){
                grade='C';
            }
            else{
                grade='D';
            }
        }

        void display(){
            ofstream fout;
            fout.open("vani.txt");
            if(!fout){
                cout<<"file not created";
            }
            fout<<name;
            fout<<rollno;
            fout<<age;
            fout<<sub1;
            fout<<sub2;
            fout<<sub3;
            fout<<total;
            fout<<per;
            fout<<grade;
        fout.close();


            ifstream fin;
            fin.open("vani.txt");
            if(!fout){
                cout<<"file not open for read ";
            }
            fin>>name>>endl;
            cout<<"name of student is :"<<name<<endl;
            fin>>rollno>>endl;
            cout<<"rollno of student is :"<<rollno<<endl;
            fin>>age>>endl;
            cout<<"age of student is "<<age<<endl;
            fin>>sub1;
            cout<<"marks of subject 1 is :"<<sub1<<endl;
            fin>>sub2;
            cout<<"marks of subject 2 is :"<<sub2<<endl;
            fin>>sub3;
            cout<<"marks of subject 3 is :"<<sub3<<endl;
            fin>>total;
            cout<<"total marks are :"<<total<<endl;
            fin>>per;
            cout<<"per of student is :"<<per<<endl;
            fin>>grade;
            cout<<"grade is :"<<grade<<endl;

            fin.close();

            void calculate(){
                if(per<70){
                    throw "exception occured ";
                }
            }
        }


};

int main(){
    result r;
    try{
        r.cal();
        r.display();
        r.student::inputstudent();
        r.calculate();
    }
    catch(const char* e){
        cout<<"mkb aagggg"<<e<<endl;
    }
    return 0;
    
}