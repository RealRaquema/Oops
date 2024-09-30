#include<iostream>
using namespace std;

class Number{
    int m, n;
    public:
    Number(){
        m=10;
        n=10;
    }
    Number(int x, int y){
        m=x;
        n=y;
    }
    Number(Number& obj){
        m = obj.m;
        n= obj.n;
    }
    void display(){
        cout<<m<<endl;
        cout<<n<<endl;

    }
};
int main(){
    Number a;
    Number b(30,40);
    Number c(a);
    a.display();
    b.display();
    c.display();
}