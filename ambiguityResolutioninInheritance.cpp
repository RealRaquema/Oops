// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
        cout<<"Enter a name";
        cin>>name;
    }
    void display(){
        cout<<name<<endl;
    }
};
class Sports{
    int m = 50;
    public:
    void display(){
        cout<<m;
    }
};
class Student: public Person, public Sports{
    public:
    void display(){
        Person:: display();
        Sports::display();
    }
};
    

int main() {
    Student S1;
    S1.read();
    S1.display();

    return 0;
}
