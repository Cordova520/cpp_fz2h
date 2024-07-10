#include<iostream>
#include<string>

void printSteps(int disks, std::string source, std::string destination, std::string helper){
    if (disks == 0){
        return;
    }
    printSteps(disks-1, source, helper, destination);
    std::cout << "Moving disk " << disks << " from " << source << " to " << destination << std::endl;
    printSteps(disks-1, helper, destination, source);

}

int main(){
    int number;
    std::cin >> number;
    std::string source = "SOURCE";
    std::string helper = "HELPER";
    std::string destination = "DESTINATION";

    
    printSteps(number, source, destination, helper);
    return 0;
}