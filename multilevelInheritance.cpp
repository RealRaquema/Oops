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
    int getAge() const {a
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

class Student : public Sport {
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
    Student s1;
    s1.setName("raquema");
    s1.setAge(20);
    s1.setSportName("Football");
    s1.setCourse("Computer Science");

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Sport: " << s1.getSportName() << endl;
    cout << "Course: " << s1.getCourse() << endl;

    return 0;
}
