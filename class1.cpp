#include<iostream>
using namespace std;
//syntax
//class class_name //class decleration
class student{
    public:
    string name,college,branch;
    int sem;
    void show(){ //member function
        cout<<"Name:"<<name<<endl;
        cout<<"College:"<<college<<endl;
        cout<<"Branch:"<<branch<<endl;
        cout<<"semester:"<<sem<<endl;

    }
};
int main(){
    student student1; //object creation
    student1.name="shivasharanu bk"; //assinginig the value os class object
    student1.college="CEC";
    student1.branch="AIML";
    student1.sem=8;
    //ctrl + D : selecting same pattern

    student student2; //object creation
    student2.name="sharanu"; //assinginig the value os class object
    student2.college="CEC";
    student2.branch="AIML";
    student2.sem=8;
    student1.show();
    student2.show();
}