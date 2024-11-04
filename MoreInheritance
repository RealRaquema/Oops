#include<iostream>
using namespace std;

class Person{
    char name [30];
    char address[40];
    public:
    void read(){
        cout<<"enter name, address."<<endl;
        cin>>name;
        cin>>address;
    }
    void display(){
        cout<<name<<address<<endl;
    }
};
class Accounts: public Person{
    int acc_no;
    float balance;
    public:
    void set_data(int acc, float bal){
        acc_no = acc;
        balance = bal;
    }
    void get_data(){
        cout<<acc_no<<"bal: "<<balance<<endl;
    }
    void deposit(float amount){
        balance+= amount;
    }
    void withdraw (float amount2){
        if(amount2>balance){cout<<"error message"<<endl;}
        else{balance-=amount2;}
    }
};
int main (){
    Accounts acc1;
    acc1.set_data(12,500);
    acc1.read();
    acc1.display();
    acc1.deposit(500);
    acc1.withdraw(300);
    acc1.get_data();
    return 0;
}
