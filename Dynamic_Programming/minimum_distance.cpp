#include<iostream>

int editStepsRecursive(std::string word_1, int size_1, std::string word_2, int size_2);
int editStepsDP(std::string word_1, std::string word_2);

int main(){
    std::string input1;
    std::cin >> input1;
    std::string input2;
    std::cin >> input2;
    std::cout << "The longest common subsequence is: " << editStepsRecursive(input1, input1.size(), input2, input2.size()) << std::endl ;
    std::cout << "The longest common subsequence is: " << editStepsDP(input1, input2) << std::endl ;
    return 0;
}

int editStepsRecursive(std::string word_1, int size_1, std::string word_2, int size_2){
    if (size_1 == 0) return size_2;///Insert all characters of string 2
    if (size_2 == 0) return size_1; //Delete all elements from string 1
    if (word_1[size_1-1] == word_2[size_2-1]){
        return editStepsRecursive(word_1, size_1-1, word_2, size_2-1);
    }
    int insert = editStepsRecursive(word_1, size_1, word_2, size_2-1);
    int del = editStepsRecursive(word_1, size_1-1, word_2, size_2);
    int replace = editStepsRecursive(word_1, size_1-1, word_2, size_2-1);
    
    return std::min(insert, std::min(del, replace)) + 1;
}

int editStepsDP(std::string word_1, std::string word_2){
    int depth = word_1.size();
    int length = word_2.size();
    int matrix [depth+1][length+1];
    for (int idx = 0; idx <= depth; idx++){
        for (int jdx= 0; jdx <= length; jdx++){
            if (idx == 0){
                matrix[idx][jdx] = jdx;
            }else if (jdx == 0){
                matrix[idx][jdx] = idx;
            }else if (word_1[idx-1] == word_2[jdx-1]){
                matrix[idx][jdx] = matrix[idx-1][jdx-1];
            }else{
                int insert = matrix[idx][jdx-1];
                int del = matrix[idx-1][jdx];
                int replace = matrix[idx-1][jdx-1];
                matrix[idx][jdx] = 1 + std::min(insert, std::min(del, replace));
            }
        }
    }
    return matrix[depth][length];
}   
