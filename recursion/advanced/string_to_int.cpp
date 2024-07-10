#include<iostream>

int length(char input[]){
    if (input[0] == '\0'){
        return 0;
    }
    return 1 + length(input+1);
}

int string2int(char word[], int size){
    if (size == 0){
        return 0;
    }
    int smallAns = string2int(word, size-1);
    int lastDigit = word[size-1] - '0';
    return smallAns*10 + lastDigit;
    
}

int main(){
    char word[] = "12345";
    int size = length(word);
    
    int conversion = string2int(word, size);

    std::cout << "The final output is: " << conversion << std::endl;

}