#include<iostream>
#include<cstring>

class Student
{
private:
    int age;
    
public:
    char *name;
    Student(Student const &student){ //Copy Constructor
        this -> age = student.age;
        //this -> name = student.name; //Shallow copy
        this -> name = new char[strlen(student.name) + 1];
        strcpy(this->name, student.name); //Deep Copy
    }

    Student(int age, char *name);
    ~Student();
    void display(){
        std::cout << name << " " << age << std::endl;
    }
};

Student::Student(int age, char *name)
{
    this -> age = age;
    // this -> name = name; This is shallow copy
    this -> name = new char[strlen(name) + 1]; //Deep Copy, make a new array and cppy the content
    strcpy(this->name, name);
}

Student::~Student()
{
}
