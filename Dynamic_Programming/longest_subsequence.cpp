#include<iostream>

int longestSubsequenceRecursive(std::string word1, int idx, std::string word2, int jdx);
int longestSubsequenceDP(std::string word1, std::string word2);

int main(){
    std::string input1;
    std::cin >> input1;
    std::string input2;
    std::cin >> input2;
    std::cout << "The longest common subsequence is: " << longestSubsequenceRecursive(input1, 0, input2, 0) << std::endl ;
    std::cout << "The longest common subsequence is: " << longestSubsequenceDP(input1, input2) << std::endl ;
    return 0;
}

int longestSubsequenceRecursive(std::string word1, int idx,std::string word2, int jdx){
    if (idx == word1.size() || jdx==word2.size()) return 0;
    if (word1[idx] == word2[jdx]){ //Match Case
        return 1 + longestSubsequenceRecursive(word1, idx+1, word2, jdx+1);
    }

    //Mismatch Case
    return std::max(longestSubsequenceRecursive(word1, idx, word2, jdx+1), longestSubsequenceRecursive(word1, idx+1, word2, jdx));
}

int longestSubsequenceDP(std::string word1, std::string word2){
    int m = word1.size();
    int n = word2.size();
    int matrix[m+1][n+1];
    for(int idx=0; idx<= m; idx++){
        for (int jdx = 0; jdx <= n; jdx++){
            if (idx==0 || jdx==0){
                matrix[idx][jdx] = 0;
                ///Match Condition
            }else if (word1[idx-1] == word2[jdx-1]){
                matrix[idx][jdx] = 1 + matrix[idx-1][jdx-1];
                ///Mismatch condition
            }else{
                matrix[idx][jdx] = std::max(matrix[idx-1][jdx], matrix[idx][jdx-1]);
            }   
        }
    }
    return matrix[m][n];
}