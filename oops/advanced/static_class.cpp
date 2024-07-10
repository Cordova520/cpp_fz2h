#include<iostream>

class Student
{
private:
    static int totalStudents;
public:
    int rollNumber;
    int age;
    

    Student(){
        totalStudents++;
    }

    int gerRollNumber(){
        return rollNumber;
    }

    static int getTotalStudents(){  //Static functions can only access access static data members & can call only static functions
        return totalStudents;       //Static functions does not have "this" keyword
    }
    
};

int Student::totalStudents = 0; //Initialize static data member, always outside the class
