#include<iostream>
#include "student.cpp"

int main(){
    char name[] = "abcd";
    Student student_1(20, name);
    student_1.display();

    Student student_2(student_1); //Copy constructor called
    student_2.name[0] = 'x';
    student_1.display();
    student_2.display();
    // name[3] = 'e';
    // Student student_2(30, name);
    // student_2.display();

    // student_1.display();
    return 0;
}