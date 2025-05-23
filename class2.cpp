#include<iostream>
using namespace std;
class Car{
    public:
    string brand,model,variant,fule_type;
    int year;
    float prize;
    //member function
    void start(){
        cout<<model<<"started!"<<endl;
    }
    void park(){
        cout<<model<<"parked!"<<endl;
    }
    void stop(){
        cout<<model<<"stoped!"<<endl;
    }
    void stop(){
        cout<<"Model:"<<model<<endl;        
        cout<<"Brand:"<<brand<<endl;        
        cout<<"Varient:"<<variant<<endl;        
        cout<<"Prize:"<<prize<<endl;        
        cout<<"Fule_type:"<<fule_type<<endl;
        cout<<"Year:"<<year<<endl;
    }
};
int main(){
    Car c1; //object created fopr the class
    c1.model="X3";
    c1.brand="BMW";
    c1.variant="4 seter";
    c1.prize=75,00,000;
    c1.fule_type="diesel";
    c1.year=2025;
    c1.start();
    c1.park();
    c1.stop();
}
