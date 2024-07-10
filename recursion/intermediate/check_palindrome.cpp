#include<iostream>
#include<string>
#define RESET 0

bool isPalindrome(std::string word, int start, int end){
    if (start > end){
        return true;
    }else if (word[start] == word[end]){
        return isPalindrome(word, start+1, end-1);
    }else{return false;}
}

int main(){
    std::string palindrome = "osoconfesoso";
    int end = palindrome.length() - 1;
    int start = RESET;
    std::string isAPalindrome;
    if (isPalindrome(palindrome, start, end)){
        isAPalindrome = " is ";
    }else if (!isPalindrome(palindrome, start, end)){
        isAPalindrome = " is not ";
    }
    
    std::cout << "The word " << palindrome << isAPalindrome << "a Palindrome\n";
    
    return 0;
}