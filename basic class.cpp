#include<iostream>
using namespace std;

class person{
    int age;
    char name [30];
    public:
    void getdata();
    void display();
};

void person:: getdata (){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter age"<<endl;
    cin>>age;
}
void person :: display(){
    cout<<name<<endl<<age<<endl;
}
int main(){

    person obj[5];
    for (int i = 0; i < 5; i++)
    {     
    obj[i].getdata();
    }

    cout<<"printing output"<<endl;
    for (int i = 0; i < 5; i++)
    {
    obj[i].display();
    }
    
    return 0;
}