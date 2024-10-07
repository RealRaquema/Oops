#include<iostream>
using namespace std;
class person{
    public:
    char name[30];
    int age;
};
class student: private person{
    public:
    void display(){
        cout<<name<<age<<endl;
    }
    void setter(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
};
int main(){
    student s1;
    s1.setter();
    s1.display();
    return 0;
}