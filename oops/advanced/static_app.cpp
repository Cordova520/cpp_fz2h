#include<iostream>
#include "static_class.cpp"

int main(){

    Student student_1;
    Student student_2;
    Student student_3;
    Student sudent_4;
    Student student_5;
    // std::cout << student_1.rollNumber << " " << student_1.age << std::endl;
    
    // std::cout << student_1.totalStudents << std::endl;
    // student_1.totalStudents = 20;
    // Student student_2;
    // std::cout << student_2.totalStudents << std::endl;
    std::cout << Student::getTotalStudents() << std::endl;
    return 0;
}