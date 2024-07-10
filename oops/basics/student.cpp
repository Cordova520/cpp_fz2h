#include<iostream>

class Student
{
private:
    int age;
public:

    //default constructor
    Student(){
        std::cout << "Constructor Called\n"; 
    }

    //Parametersied Constructor
    Student(int roll_number){
        std::cout << "Constructor 2 called\n";
        rollNumber = roll_number;
    }

    Student(int years,int roll_number){
        std::cout << "this: " << this << std::endl;
        std::cout << "Constructor 3 called\n";
        this -> age = years;
        this -> rollNumber = roll_number;
    }

    int rollNumber;

    void display(){
        std::cout << age << " " << rollNumber << std::endl;
    }

    int getAge(){
        return age;
    }

    int getRollNumber(){
        return rollNumber;
    }

    void setAge(int years){
        age = years; 
    }

    ~Student(){  //Our destructor wull be called
        std::cout << "Object Destroyed\n"; 
    }
};




