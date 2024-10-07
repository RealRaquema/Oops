#include<iostream>
using namespace std;
class person{
    public:
    char name[30];
    int age;
};
class sport {
    public:
   int medals;  
};

class student: private person,private sport{
    public:
    void setter(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
        cout<<"enter no of medals: ";
        cin>>medals;
    }

    void display(){
        cout<<"multiple inheritance"<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<medals<<endl;
    }
};

int main(){
    student s1;
    s1.setter();
    s1.display();
    return 0;
}




