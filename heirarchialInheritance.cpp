#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    void setName(const string& name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
};


class Sport : public Person {
private:
    string sportName;
public:
    void setSportName(const string& sportName) {
        this->sportName = sportName;
    }
    string getSportName() const {
        return sportName;
    }
};


class Student : public Person {
private:
    string course;
public:
    void setCourse(const string& course) {
        this->course = course;
    }
    string getCourse() const {
        return course;
    }
};

int main() {
  ties
    Student s1;
    s1.setName("Faisal");
    s1.setAge(20);
    s1.setCourse("Computer Science");

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Course: " << s1.getCourse() << endl;


    Sport s2;
    s2.setName("raquema");
    s2.setAge(22);
    s2.setSportName("Football");

    cout << "\nName: " << s2.getName() << endl;
    cout << "Age: " << s2.getAge() << endl;
    cout << "Sport: " << s2.getSportName() << endl;

    return 0;
}
