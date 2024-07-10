#include<iostream>
#include<vector>
#include<cmath>

int main(){
    std::vector<int> *dynamic_vector = new std::vector<int>(); //Dynamic Vector declaration
    std::vector<int> vec;  //Static Vector declaration
    std::vector<int> ini_vec(10, -2); //VEctor with initial size

    for (int idx = 0; idx < 100; idx++)
    {
        std::cout << "Capacity: " << vec.capacity() << std::endl;
        std::cout << "Size: " << vec.size() << std::endl;
        vec.push_back(idx+1);
        
    }

    //sort(vec.begin(), vec.end()); //HOw to sort a vector
    

    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);

    // vec[1] = 100;
    // //Never use [] to inset elements
    // // vec[4] = 1002;
    // // vec[5] = 1234;

    // vec.push_back(23);
    // vec.push_back(345);

    // vec.pop_back();

    // for (int idx = 0; idx < vec.size(); idx++)
    // {
    //     std::cout << vec[idx] << std::endl;
    // }
    
    // std::cout << vec.at(4) << std::endl;
    // std::cout << vec.at(6) << std::endl; //This will return error since it is not a 6th element

    // std::cout << vec[0] << std::endl;
    // std::cout << vec[1] << std::endl;
    // std::cout << vec[2] << std::endl;
    // std::cout << vec[3] << std::endl;
    // std::cout << vec[4] << std::endl;
    // std::cout << vec[5] << std::endl;
    // std::cout << vec[6] << std::endl;

    return 0;
}