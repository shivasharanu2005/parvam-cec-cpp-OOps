#include<iostream>
using namespace std;

void sayHello(){ //function decleretion
    cout<<"Hello!"<<endl; //function difinition
}
    int sayHi(string name){
        cout<<"Hi,"<<name<<endl;
    }

int greet (string fname,string lname,int age){ //function with parameters
    cout<<"Hi,"<<fname<<""<<lname<<",age:"<<age<<endl;
}
int main(){
    string firstName,lastName,friendName;
    int Age;
    cout<<"enter your firstName:";
    cin>>firstName;
    cout<<"enter your lastName:";
    cin>>lastName;
    cout<<"enter your age:";
    cin>>Age;
    cout<<"enter your friend's name:";
    cin>>friendName; //function call
    sayHello(); //function call with arguments
    sayHi(friendName);
    greet(firstName,lastName,Age);
}
