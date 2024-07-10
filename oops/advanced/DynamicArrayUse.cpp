#include<iostream>
#include "dynamic_array.cpp"

int main(){
    DynamicArray data_1; //default constructor
    data_1.add(10);
    data_1.add(20);
    data_1.add(30);
    data_1.add(40);
    data_1.add(50);
    data_1.add(60);

    std::cout<< data_1.get(10) << std::endl;

    data_1.print();

    std::cout << data_1.getCapacity() << std::endl;

    DynamicArray data_2(data_1); //Copy constructor
    DynamicArray data_3;
    data_3 = data_1; //Copy assignment operator
    data_1.add(100, 0);
    data_1.print();
    data_2.print();
    data_3.print();

    DynamicArray data_4(100); //Our parametrizad constructor
    std::cout << data_4.getCapacity() << std::endl;

    return 0;
}