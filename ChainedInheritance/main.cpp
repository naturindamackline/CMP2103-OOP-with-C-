
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
string name;
int age;

public:
Person(string n, int a) {
name = n;
age = a;
}

void displayPerson() {
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
}
};

// Derived class
class Student : public Person {
protected:
string registrationNumber;

public:
Student(string n, int a, string reg): Person(n, a) {
registrationNumber = reg;
}

void displayStudent() {
cout << "Registration Number: "<< registrationNumber << endl;

}
};

// Further derived class
class UniversityStudent : public Student {
private:
string course;

public:
UniversityStudent(string n, int a, string reg, string c): Student(n, a, reg) {
course = c;
}

void displayCourse() {
cout << "Course: " << course << endl;
}
};

int main() {
UniversityStudent s1( "Mackline", 20, "24/U/1234", "Electrical Engineering");


cout << "UNIVERSITY STUDENT DETAILS" << endl;
cout << "--------------------------" << endl;

s1.displayPerson();   // Inherited from Person
s1.displayStudent();  // Inherited from Student
s1.displayCourse();   // Defined in UniversityStudent

return 0;
}
