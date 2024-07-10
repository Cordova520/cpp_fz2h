#include<iostream>
#include<vector>

int knapsackRecursive(int size,std::vector<int> price, std::vector<int> weigths, int knapsackWeigth);
int knapsackDP(std::vector<int> price, std::vector<int> weigths, int knapsackWeigth);

int main(){

    return 0;
}

int knapsackRecursive(int size,std::vector<int> price, std::vector<int> weigths, int knapsackWeigth){
    if (size==0 || knapsackWeigth==0) return 0;
    if (weigths[size-1] > knapsackWeigth){
        return knapsackRecursive(size-1, price, weigths, knapsackWeigth);
    }else{
        int include = price[size-1] + knapsackRecursive(size,price,weigths,knapsackWeigth - weigths[size-1]);
        int exclude = knapsackRecursive(size-1,price,weigths,knapsackWeigth);
        return std::max(include, exclude);
    }   
}

int knapsackDP(std::vector<int> price, std::vector<int> weigths, int knapsackWeigth){
    int size = price.size();
    int matrix[size+1][knapsackWeigth+1];
    for (int idx=0; idx <= size; idx++){
        for (int jdx=0; jdx <= knapsackWeigth; jdx++){
            if (idx==0 || jdx==0){
                matrix[idx][jdx] = 0;
            }else if (weigths[idx-1] > jdx){
                matrix[idx][jdx] = matrix[idx-1][jdx];
            }else{
                int include = price[idx-1] + matrix[idx][jdx-weigths[idx-1]];
                int exclude = matrix[idx-1][jdx];
                matrix[idx][jdx] = std::max(include, exclude);
            }
        }
        
    }
    
    return matrix[size][knapsackWeigth];
}