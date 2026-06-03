#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string :";
    getline(cin,str);
    while(str[i]!='\0'){
        if(str[i]!=' '){
            cout<<str[i];
        }
        i++;
    }
    return 0;

}