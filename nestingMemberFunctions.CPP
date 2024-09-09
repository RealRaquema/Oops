#include<iostream>
using namespace std;

class Sample{
    int m;
    void read (void){
        cin>>m;
    }
    public:
        void update();
        void write();
};

void Sample:: update(){
    read();
}
void Sample :: write(){
    cout<<m<<endl;
}
int main (){
 Sample obj1;
 obj1.update();   
 obj1.write();
}