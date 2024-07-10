#include<iostream>
#include "student.cpp"

int main(){
    
    //Object Creation and Constructor applied
    // Student student_1;
    // student_1.display();

    // Student student_2;
    // student_2.display();

    // Student *student_3 = new Student;
    // student_3 -> display();

    // //Parameterised constructor demo
    // Student student_4(10);
    // student_4.display();

    // Student *student_5 = new Student(20);
    // student_5 -> display();

    // Student student_6(10,100);
    // student_6.display();

    //Copy Constructor
    // Student student_1(10,100); //PArametrized Constructor user defined
    // std::cout << "Student 1 " << std::endl;
    // student_1.display();
    // Student student_2(student_1); // Copy inbulti
    // std::cout << "Student 2 " << std::endl;
    // student_2.display();

    // Student *student_3 = new Student(20, 200);
    // std::cout << "Student 3 " << std::endl;
    // student_3 -> display();

    // Student student_4(*student_3);
    // Student *student_5 = new Student(*student_3);
    // Student *student_6 = new Student(student_1);

    //Copy Assignment operator
    // Student student_1(10, 100);
    // Student student_2(20, 200);
    // Student *student_3 = new Student(30, 300);

    // student_2 = student_1;
    // *student_3 = student_1;
    // student_2 = *student_3;

    // //Destructor calling for dynamic object
    // delete student_3;

    //Summary
    Student student_1; //Constructor default called
    Student student_2(100); //Constructor 2 called
    Student student_3(10, 100); //Constructor 3 called
    Student student_4(student_3); //Copy constructor called
    student_1 = student_2; //Copy assignment operator called
    Student student_5 = student_3; //Copy constructor also called
    
    return 0;
}