#include<iostream>
#include<vector>

void storeAllPositions(int array[], int size, int number, int idx, std::vector<int> &ans){

    if (idx == size){
        return;
    }else if (array[idx] == number){
        ans.push_back(idx);
    }
    storeAllPositions(array, size, number, idx+1, ans);
}

int storeAllPositions2(int array[], int size, int number, int idx, int ans[], int jdx){

    if (idx == size){
        return 0;
    }else if (array[idx] == number){
        ans[jdx] = idx;
        return 1 + storeAllPositions2(array, size, number, idx+1, ans, jdx+1);
    }
    return 0 + storeAllPositions2(array, size, number, idx+1, ans, jdx);
}

int main(){
    int array[] = {5,5,6,5,6,7};
    int size = sizeof(array) / sizeof(array[0]);
    int idx = 0;
    int key = 5;
    std::vector<int> vecAns;
    int output[10];
    storeAllPositions(array, size, key, idx, vecAns);
    
    for (int jdx = 0; jdx < vecAns.size(); jdx++){
        std::cout << vecAns[jdx] << " ";
    }
    std::cout << std::endl;
    int sizeArray = storeAllPositions2(array, size, key, idx, output, idx);;
    for (int zdx = 0; zdx < sizeArray; zdx++){
        std::cout << output[zdx] << " ";
    }
    std::cout << std::endl;
    return 0;
}