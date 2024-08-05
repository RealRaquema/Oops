#include<iostream>
using namespace std;
class employee {
    private:
    int Salary;
    public :
    void setSalary(int s){
        Salary = s;
    }
     int getsalary () {
        return Salary;
    };
};
    int main() {
        employee myobj;
        myobj.setSalary(5000);
        cout<<"the salary is: "<<myobj.getsalary()<<endl;
        return 0;

    }