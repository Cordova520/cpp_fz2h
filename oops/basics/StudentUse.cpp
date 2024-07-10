#include<iostream>
#include "student.cpp"

int main(){
    // //Statically
    // Student student_1;
    // Student student_2;

    // //Dynamically
    // Student *student_3 = new Student;
    // // -------------------------------------------- //
    // //student_1.age = 24;
    // student_2.rollNumber = 100;

    // student_1.display();
    // student_2.display();

    // std::cout << "Student 1 age : " << student_1.getAge() << std::endl;
    // std::cout << "Student 2 age: " << student_2.getAge() << std::endl;

    // //std::cout << student_1.age << std::endl;
    // std::cout << student_2.rollNumber << std::endl;

    // //(*student_3).age = 23;
    // (*student_3).rollNumber = 30;
    // (*student_3).display();

    // //student_3 -> age = 23;
    // student_3 -> rollNumber = 30;
    // student_3 -> display();

    // std::cout << "Student 3 age: " << student_3 -> getAge() << std::endl;

    Student student_1;
    Student *student_2 = new Student;

    student_1.setAge(20);
    student_2 -> setAge(30);

    student_1.display();
    student_2->display();

    return 0;
}