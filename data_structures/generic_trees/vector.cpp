#include<iostream>
#include<vector>

int main(){
    std::vector<int>* vPointer = new std::vector<int>();  ///Dynamic
    std::vector<int> rVector; /// Static

    for (int idx = 0; idx < 100; idx++){
        std::cout << "Capacity: " << rVector.capacity() << std::endl;
        std::cout << "Size: " << rVector.size() << std::endl;
        rVector.push_back(idx+1);
    }
    // for (int jdx = 0; jdx < rVector.size(); jdx++){
    //     std::cout << rVector[jdx];
    // }
    
    
    // rVector.push_back(10);
    // rVector.push_back(20);
    // rVector.push_back(30);

    // rVector[1] = 100;
    // /// Neverise [] to insert elements
    // // rVector[4] = 1002;
    // // rVector[5] = 1234;

    // rVector.push_back(23);
    // rVector.push_back(234);

    // rVector.pop_back();
    // for (int idx = 0; idx < rVector.size(); idx++){
    //     std::cout << rVector[idx] << std::endl;
    // }
    
    // std::cout << rVector.at(4) << std::endl;
    // std::cout << rVector.at(6) << std::endl;
    // std::cout<< rVector[0] <<std::endl;
    // std::cout<< rVector[1] <<std::endl;
    // std::cout<< rVector[2] <<std::endl;
    // std::cout<< rVector[3] <<std::endl;
    // std::cout<< rVector[4] <<std::endl;
    // std::cout<< rVector[5] <<std::endl;

    return 0;
}